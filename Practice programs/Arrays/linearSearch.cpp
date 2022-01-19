// This is a program to perform the linear search

#include <iostream>
using namespace std;

int LinearSearch(int a[], int key, int n){
    for(int i=0; i<n; i++){
        if(a[i]==key){
            return i+1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the size of the Array \n";
    cin>>n;
    int a[n];
    // Input the array using for loop
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Enter the key to find \n";
    int key;
    cin>>key;

    cout<<"The element is found at the position: \n";
    cout<<LinearSearch(a, key, n);

    return 0;

}