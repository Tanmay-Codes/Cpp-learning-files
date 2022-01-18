// This is a program to print the reverse of the given number

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, reverse=0;
    cout<<"Enter a number that you want to print the reverse of: ";
    cin>>num;
    while(num>0){
        int rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }

    cout<<reverse;
}