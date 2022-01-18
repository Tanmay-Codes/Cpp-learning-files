// Checking if the input number is armstrong or not?

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, rem, sum, on;

    cout<<"Enter the number to check if it is armstrong? :";
    cin>>num;
    on = num;

    while(num>0){
        rem = num%10;
        sum+= pow(rem,3);
        num = num/10;
        
    }
    if(on==sum){
        cout<<"The number "<<sum<<" is a armstrong number\n";
    }
    else{
        cout<<"The number "<<on<<" is not a armstrong number\n";
    }
}