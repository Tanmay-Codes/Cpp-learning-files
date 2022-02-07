// lets sort a given string in the acending order like a b c d e f

#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    string s1 = "xyzcba";
    sort(s1.begin(), s1.end());
    cout<<s1;
    return 0;
}
