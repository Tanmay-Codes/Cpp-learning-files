// Changing the upper and lower case of the given string using the inbuilt function and manually
// note that a - A = 36
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string upper(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }

    return s;
}

string lower(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }

    return s;
}


int main(){
    string s = "kjgasinkldjnksn";

    cout<<upper(s)<<endl;
    cout<<lower(s)<<endl;

    // using the inbuilt function of the string to make it the uppercase

    transform(s.begin(), s.end(), s.begin(), :: toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), :: tolower);
    cout<<s<<endl;


    return 0;
}