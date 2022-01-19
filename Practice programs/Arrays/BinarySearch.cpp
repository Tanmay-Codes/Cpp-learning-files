// This is a program to perform the Binary search

#include <iostream>
using namespace std;

int BinarySearch(int a[], int key, int n){
    int s=0;
    int e=n;
    while (s<=e){
        int mid = (s+e)/2;
        if (a[mid] == key){
            return mid+1;
        }
        else if (a[mid] > key){
            e = mid-1;
        }
        else {
            e = mid+1;
        }

        s++;
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
    cout<<BinarySearch(a, key, n);

    return 0;

}