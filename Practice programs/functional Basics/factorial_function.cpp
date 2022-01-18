// This is a program to find factorial of a number

#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=2; i<=n; i++){
        f= i*f;

    }
    return f;
}

int main()
{
    int num, ans;
    cin>>num;
    ans = fact(num);
    cout<<ans;
    return 0;
}