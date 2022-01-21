// Subarray: Is the continuous part of an array.
// for a[5] = 1 2 0 7 2  subarray: 2 0 7 between indices 1 and 3
// Number of subarrays between n elements = nC2+n = (n*(n+1))/2

// A subsequence is a sequence that can be derived from an array 
// by selecting zero or more elements, without changing 
// the order of the remaining elements
// Number of subsequence of an array with n elements is 2^n

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    string s=" ";

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum += a[j];
            s = s +  to_string(a[j]) + " + ";
            cout<<s<<" = "<<sum<<endl;
        }
        
    }
    return 0;


}