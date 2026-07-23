#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int hash[26]={0}; // for both capital and small hash[256]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++; // for capital hash[s[i]-'A'] for mix case hash[s[i]]; 
    }
    int q;
    cin >> q;
    while(q--){
        char a;
        cin >> a;
        cout << hash[a-'a'] << endl;
    }

    return 0;
}