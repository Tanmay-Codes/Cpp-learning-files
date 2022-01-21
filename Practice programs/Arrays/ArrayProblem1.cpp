// Problem Statement:
// Given an array a[] of size n, Find maximum output for every i from 0-n-1.
// i.e, for a[n]. output Max(a[0], a[1], a[2].....a[i]).
// example a[5] = 1, 0, 3, 5, 2    output>> 1 1 3 5 5.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int mx = -1999999;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){

        mx = max(mx, a[i]);
        cout<<mx<<" ";
    }
    return 0;
}