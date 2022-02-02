// How to pass the pointers to the functions
#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=2, b=4;
    cout<<"value of a: "<<a<<endl;
    cout<<"valie of b: "<<b<<endl;
    swap(&a, &b); 
    // This is called call by reference
    cout<<"\n***********after swaping***********\n";

    cout<<"value of a: "<<a<<endl;
    cout<<"valie of b: "<<b<<endl;

    return 0;
}