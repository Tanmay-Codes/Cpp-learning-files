// this is a function that returns a string of max number of the numeric string returned
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string MaxString(string str){

    sort(str.begin(), str.end(), greater<int>());
    return str;

}

int main(){
    int n = 9409;
    string str;
    str = to_string(n);
    cout<<"Max number is = "<<MaxString(str);
    return 0;
}