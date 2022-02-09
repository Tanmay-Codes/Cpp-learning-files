// This program counts the number of 1s in a given number. Here also we use the concept of n & n-1
// This will set the right most set-bit to zero. and then this way we count till all the set bits gets to zero

#include<iostream>
using namespace std;

int numberofOnes(int n){
    int count = 0;
    while (n){
        n = n & n-1;
        count++;
    }

    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<numberofOnes(n);

    return 0;
}