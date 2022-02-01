// This is Matrix Searching with a better approach


// Note for this approach it should be noted that the array elements
//need to be in sorted order across the row also and column also.
 


#include"bits/stdc++.h"
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mat[i][j];
        }
    }
// tor right position declare
    int r=0, c=m-1;
    bool found=false;

    while (r<n and c>=0)
    {
        if(mat[r][c] == target){
            found = true;
        }
        if(mat[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}