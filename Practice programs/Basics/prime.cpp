// This is a program to print the prime number between the range

#include<iostream>
using namespace std;

int main(){
    int i, a, b;
    cout<<"This is the program to enter prime numbers between the range, so input the range";
    cin>>a>>b;
    cout<<"The prime numbers are as follows \n";
    for(int num=a; num<b; num++){
        for(i=2; i<=num; i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<num<<endl;
        }
    }

}