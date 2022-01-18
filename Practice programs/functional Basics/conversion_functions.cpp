// This is a program to check different conversions

#include<bits/stdc++.h>
using namespace std;

// binary to decimal

int BinaryToDecimal(int n){
    int ans=0, x=1;
    // x is a temprory variable
    while(n>0){
        int y= n%10;
        ans += y*x;
        x *= 2;
        n /= 10;
    }

    return ans;

}

// Function for OCTAL TO DECIMAL

int OctalToDecimal(int n){
    int ans=0, x=1;
    // x is a temprory variable
    while(n>0){
        int y= n%10;
        ans += y*x;
        x *= 8;
        n /= 10;
    }

    return ans;

}


// HEXADECIMAL TO DECIMAL

int hexadecimalToDecimal(string n){
    int ans = 0;
    int x = 1;
// find size of the string
    int s = n.size();

    for (int i = s-1; i >= 0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x*(n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;

}

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<hexadecimalToDecimal(s);

    return 0;
}

