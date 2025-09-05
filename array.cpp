//wap to perform sum of array
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=56 , arr[1]=91 , arr[2]=32;
    arr[3]=339 , arr[4]=431;
    int sum=0;
for(int i=0;i<=5;i++)
{
    sum=sum+arr[i];
}
cout<<"sum of array = "<<sum;
return 0;
}