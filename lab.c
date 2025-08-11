#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <stdbool.h>

#define INF INT_MAX

typedef struct {
    int source, destination, weight;
} Edge;

typedef struct {
    int V; // Number of vertices
    int E; // Number of edges
    Edge* edges;
} Graph;

Graph* createGraph(int V, int E) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    if (!graph) { perror("malloc failed for graph"); return NULL; }
    graph->V = V;
    graph->E = E;
    graph->edges = (Edge*)malloc(E * sizeof(Edge));
    if (!graph->edges) { perror("malloc failed for edges"); free(graph); return NULL; }
    return graph;
}

void printDistances(int dist[], int V, int source_vertex) {
    printf("Shortest distances from source vertex %d:\n", source_vertex);
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF) {
            printf(" Vertex %d: INF (unreachable)\n", i);
        } else {
            printf(" Vertex %d: %d\n", i, dist[i]);
        }
    }
}

bool bellmanFord(Graph* graph, int source) {
    int V = graph->V;
    int E = graph->E;
    int* dist = (int*)malloc(V * sizeof(int));
    if (!dist) { perror("malloc failed for dist array"); return false; }

    for (int i = 0; i < V; i++) dist[i] = INF;
    dist[source] = 0;

    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph->edges[j].source;
            int v = graph->edges[j].destination;
            int weight = graph->edges[j].weight;
            if (dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    bool has_negative_cycle = false;
    for (int j = 0; j < E; j++) {
        int u = graph->edges[j].source;
        int v = graph->edges[j].destination;
        int weight = graph->edges[j].weight;
        if (dist[u] != INF && dist[u] + weight < dist[v]) {
            printf("Graph contains negative cycle!\n");
            has_negative_cycle = true;
            break;
        }
    }

    if (!has_negative_cycle) {
        printDistances(dist, V, source);
    }

    free(dist);
    return !has_negative_cycle;
}

int main() {
    printf("--- Single-Source Shortest Path (Bellman-Ford Algorithm) ---\n\n");

    // Example 1
    int V1 = 5, E1 = 8;
    Graph* graph1 = createGraph(V1, E1);
    if (!graph1) return 1;

    graph1->edges[0] = (Edge){0, 1, -1};
    graph1->edges[1] = (Edge){0, 2, 4};
    graph1->edges[2] = (Edge){1, 2, 3};
    graph1->edges[3] = (Edge){1, 3, 2};
    graph1->edges[4] = (Edge){1, 4, 2};
    graph1->edges[5] = (Edge){3, 1, 1};
    graph1->edges[6] = (Edge){3, 2, 5};
    graph1->edges[7] = (Edge){4, 3, -3};

    printf("Example 1: Graph with positive and negative weights (no negative cycle)\n");
    clock_t start1 = clock();
    bellmanFord(graph1, 0);
    clock_t end1 = clock();
    printf("Time taken: %f seconds\n\n", ((double)(end1 - start1)) / CLOCKS_PER_SEC);

    free(graph1->edges);
    free(graph1);

    // Example 2
    int V2 = 4, E2 = 4;
    Graph* graph2 = createGraph(V2, E2);
    if (!graph2) return 1;

    graph2->edges[0] = (Edge){0, 1, 1};
    graph2->edges[1] = (Edge){1, 2, -1};
    graph2->edges[2] = (Edge){2, 3, -1};
    graph2->edges[3] = (Edge){3, 1, -3}; // Negative cycle: 1 -> 2 -> 3 -> 1 with total weight -5

    printf("Example 2: Graph with a negative cycle\n");
    clock_t start2 = clock();
    bellmanFord(graph2, 0);
    clock_t end2 = clock();
    printf("Time taken: %f seconds\n\n", ((double)(end2 - start2)) / CLOCKS_PER_SEC);

    free(graph2->edges);
    free(graph2);

    // Example 3
    int V3 = 500, E3 = V3 * 5;
    Graph* graph3 = createGraph(V3, E3);
    if (!graph3) return 1;

    srand(time(NULL));
    for (int i = 0; i < E3; i++) {
        graph3->edges[i].source = rand() % V3;
        graph3->edges[i].destination = rand() % V3;
        while (graph3->edges[i].source == graph3->edges[i].destination) {
            graph3->edges[i].destination = rand() % V3;
        }
        graph3->edges[i].weight = rand() % 200 - 100;
    }

    printf("Example 3: Performance Test (Random Graph)\n");
    clock_t start3 = clock();
    bellmanFord(graph3, 0);
    clock_t end3 = clock();
    printf("Time taken for V=%d, E=%d: %f seconds\n", V3, E3, ((double)(end3 - start3)) / CLOCKS_PER_SEC);

    free(graph3->edges);
    free(graph3);

    return 0;
}
