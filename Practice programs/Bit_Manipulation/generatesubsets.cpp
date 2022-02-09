// This program generates the subsets of the given array.
#include<iostream>
using namespace std;

void subsets (int arr[], int size){
    for(int i=0; i < (1 << size); i++){
        for(int j=0; j < size; j++){
            if(i & (i<<j))
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    subsets(arr, 5);

    return 0;
}