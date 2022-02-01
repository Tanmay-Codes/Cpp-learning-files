# include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    char arr[n];
    cin.ignore();
    cin>>arr;
    int i=0;
    bool flag=1;
    while(arr[i] != '\0'){
        if(arr[i] != arr[n-1-i]){
            flag=0;
            break;
        }
        i++;
        
    }

    if(flag)
    cout<<"Palindrom";
    else
    cout<<"Not Palindrom";
    
    return 0;
    }