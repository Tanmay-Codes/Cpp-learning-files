// This is program to check pythagorian triplet
// square of max of one number is qual to sum of square of other two numbers 
// i.e, if  a is max of a,b,c then
// a^2 = b^2 + c^2

#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y,z));
    int b=0, c=0;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if( a*a == b*b + c*c )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"This is a triplet";
    }
    else{
        cout<<"This is not a triplet";
    }

    return 0;
}
