// This is the program to print the pascals triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;

int fact(int num){
    int ans=1;
    for (int i = 2; i <= num; i++)
    {
        ans*=i;
    }
    return ans;
}

int main()
{
    int n, f;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            f = fact(i)/(fact(j)*fact(i-j));
            cout<<f<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}