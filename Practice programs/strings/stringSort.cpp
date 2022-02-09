// this makes a function that returns a sorted string
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string sorted(string s){
    sort(s.begin(), s.end());
    return s;
}

int main(){
    string s = "aksfjnakjnknka";
    cout<<sorted(s);
    return 0;
}