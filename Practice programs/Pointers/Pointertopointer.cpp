// using pointer as a pointer to the pointers
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* p;
    int** q;
    p = &a;
    q = &p;

    cout<<"value of a: "<<a<<endl;
    cout<<"dereferencing 1st p: "<<*p<<endl;
    cout<<"using q to print value of p which has address of a:  "<<*q<<endl;
    cout<<"dereferencing 2nd q which have address of p: "<<**q<<endl;

}