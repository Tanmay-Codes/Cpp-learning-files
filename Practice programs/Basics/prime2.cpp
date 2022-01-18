// This is a program to find if a number is prime or not?

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num, flag=0;
    cout<<"Enter a number to check if it is prime or not : ";
    cin>>num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num%i==0){
            flag=1;
            cout<<"The given number is not prime\n";
            break;
        }
    }
    if(flag==0){
        cout<<"Number is prime\n";
    }
 
}