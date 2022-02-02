// This files shows how to store array of a pointer
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30};
    int* ptr;
    ptr = arr;
    cout<<"Array pointer (ptr)"<<ptr<<endl;
    cout<<"Array pointer (arr)"<<arr<<endl;
    return 0;
}