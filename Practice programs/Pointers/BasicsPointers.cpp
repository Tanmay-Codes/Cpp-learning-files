// this file shows how to declare and store the value of the pointers
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* aptr;
    aptr = &a;
    cout<<"value of a (a): "<<a<<endl;
    cout<<"Address of a (aptr): "<<aptr<<endl;
    cout<<"Address of a (&a): "<<&a;
    return 0;
}