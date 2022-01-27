// Given 2D array n1Xn2 and n2Xn3 . output the multiplied matrix

// #include"bits/stdc++.h"
#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++)
        cin>>m1[i][j];
    }

    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++)
        cin>>m2[i][j];
    }

// The multiplication rule says the ans array of n1Xn2 and n2Xn3 is of order n2Xn3 
    int ans[n1][n3];
// Initializing this ans array to zero now

    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++)
        ans[i][j] = 0;
    }


    // multiplication here

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){

                ans[i][j] += m1[i][k]*m2[k][j];

            }
        }
    }

      for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++)
        cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    return 0;

}