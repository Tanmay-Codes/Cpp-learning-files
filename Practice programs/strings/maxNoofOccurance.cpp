// This program returns the maximum charachter of the string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "tanmay";
    int f[26];
    for (int i = 0; i < 26; i++)
        f[i] = 0;

    for(int i=0; i<s.size(); i++){
        f[s[i] - 'a']++;
    }    
    int maxf = 0;
    char ans;
    for(int i=0; i<s.size(); i++){
        if(f[i] > maxf){
            maxf = f[i];
            ans = i + 'a';
        }
    }

    cout<<"Max repeated charachter = "<<ans<<" "<<maxf<<" times";

    return 0;
}