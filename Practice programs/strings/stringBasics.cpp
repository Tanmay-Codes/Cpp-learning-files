// this file has the basics of string operations
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    // this is how we input a string but without the space
    cout<<"Enter a string without the space here \n";
    cin>>s1;
    // then how to input a string with space?
    cout<<"Enter a string here with space, or type a scentence here \n";
    // Note here we use ignore() before the getline, so that the \n buffer should be removed.
    cin.ignore();
    getline(cin, s2);
    cout<<s1<<"\n"<<s2<<endl;

    return 0;
}