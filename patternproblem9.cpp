//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
        for(int i=1;i<=n-i;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }

}