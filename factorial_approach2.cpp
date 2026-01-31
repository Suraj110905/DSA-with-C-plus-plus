//approach 2 using while loop
int main(){
    int n,fact;
    cout<<"enter the number";
    cin>>n;
    if(n==0)
        cout<<"\nfactorial is 1";
    else if(n<0)
        cout<<"\nfactorial is not possible";
    else{
        fact=1
        while(n>=1)
        {
            fact=fact*n;
            n=n-1;
        }
        cout<<"\nfactorial is"<<fact;
    }
}