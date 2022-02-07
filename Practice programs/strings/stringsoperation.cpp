// This contains s1 and s2 and buch of the string operations
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Fam", s2 = "ily", s3 = "abc", s4 = "abc";
    cout<<"this adds the string without appending: s1+s2 = "<<s1+s2<<endl;
    cout<<"S1 before append here : "<<s1<<endl;
    // lets append s2 to s1
    cout<<"Here we output with append function s1.apend(s2): "<<s1.append(s2)<<endl;
    cout<<"s1 after append here : "<<s1;
    cout<<"s1.compare(s2) : "<<s1.compare(s2)<<endl;
    cout<<"s3.compare(s3) : "<<s3.compare(s4)<<endl;

    cout<<"Lets access 3rd letter s1 : "<<s1[2]<<endl;
    if(s2.empty()){
        cout<<"This is empty \n";
    }
    else cout<<"not empty \n";

    cout<<"find the letter ly from word family : in s1 using s1.find() : "<<s1.find("ly");
    // the insert is used with a index position followed with a text to enter
    s2.insert(2,"lol");
    cout<<"\n lets insert a word lol in the string s2 : "<<s2;

    // finding the substring of the given legth here

    cout<<"\n this will find the substring from s1 using s1.sustr(index, length) : "<<s1.substr(2,3);

    string str1 = "124";
    int a = 5;
    cout<<"converts the string to integer using stoi(): "<<a+stoi(str1)<<endl;

    cout<<"lets convert the integer to a string using to_string : "<<str1 + to_string(a);









    return 0;
}