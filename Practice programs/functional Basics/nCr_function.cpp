// This program finds the nCr
#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for (int i = 2; i <= n; i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int n,r,ans;
    cin>>n>>r;
    ans = fact(n)/(fact(n-r)*fact(r));
    cout<<"\n Factorial for "<<n<<"C"<<r<<" is "<<ans;
    return 0;
}