// This is a program to perform the Bubble Sort

#include <iostream>
using namespace std;

int BubbleSort(int a[], int n){
    int counter = 1;
    while( counter < n){
        for(int i=0; i< n-counter; i++){
            if(a[i]>a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
        counter++;
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
    BubbleSort(a, n);


      for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


    return 0;

}