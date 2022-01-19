// This is a program to perform the Selection Sort

#include <iostream>
using namespace std;

int SelectionSort(int a[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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
    SelectionSort(a, n);


      for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


    return 0;

}