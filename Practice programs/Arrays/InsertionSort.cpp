// This is a program to perform the Selection Sort

#include <iostream>
using namespace std;

int InsertionSort(int a[], int n){

    for(int i=1; i<n; i++){
        int curr = a[i], j= i-1;
        while( a[j] > curr && j>= 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;

        }
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

    cout<<"The Sorted Array is as follows:  \n";
    InsertionSort(a, n);


      for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


    return 0;

}