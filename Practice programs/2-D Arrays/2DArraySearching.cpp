#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"Enter The row and columns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"\n now enter the array here";
    system("CLS");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\n *******Matrix is********* \n";

       for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n ********************** \n";

    cout<<"Search element to find in the array: ";
    int x, xpos=0, ypos=0;
    bool flag=false;

    cin>>x;
       for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == x){
                flag=true;
                xpos= i+1;
                ypos= j+1;
                break;
            }
        }
    }
    if(flag){
        cout<<"\n Your Element "<<x<<" is found at position: "<<xpos<<" "<<ypos;
    }
    else{
        cout<<"\n Sorry NOT FOUND!!"
    }
}
