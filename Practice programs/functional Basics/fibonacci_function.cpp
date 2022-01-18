#include<iostream>
using namespace std;

void fib(int num)
{
    int t1=0, t2=1, next;
    for (int i = 2; i < num; i++)
    {
        cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    return;    
}

int main()
{
    int num;
    cin>>num;
    fib(num);
    return 0;
}