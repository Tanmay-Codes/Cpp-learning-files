// This is a program that checks the is power of two?

// note here we using he & operator, since the n  & n-1 sets the first bit to zero.
#include<iostream>
using namespace std;

int isPoweroftwo(int n){
    return !(n && (n & n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<isPoweroftwo(n);

    return 0;
}