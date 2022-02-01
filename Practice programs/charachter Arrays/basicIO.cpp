// This shows basic input and output of arrays

# include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    char arr[n];
    cin.ignore();
    // cin>>arr;
    cin.getline(arr, n);
    cin.ignore();
    
    cout<<arr;
    return 0;
}