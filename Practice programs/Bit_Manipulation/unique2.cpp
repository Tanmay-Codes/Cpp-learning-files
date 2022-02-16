// This is a program that finds out the unique two numbers in a given array
#include<iostream>
using namespace std;


int getbit(int n, int pos){
    return((n & (1<<pos)) != 0);
}

void unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    int temp = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos ++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for(int i=0; i<n ; i++){
        if(getbit(arr[i], pos-1)){
            newxor = newxor ^ arr[i];
        }
    }

    cout<<"1st unique number = "<<newxor;
    cout<<"\n2nd unique number = "<<(newxor ^ temp);
}

int main(){
    int arr[6] = {1,2,3,4,1,2};
    unique(arr, 6);
    return 0;
}