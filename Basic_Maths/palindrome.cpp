#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int n1=n;
    int z=0;
    while(n1){
        int r=n1%10;
        z=z*10+r;
        n1/=10;
    }
    if(n == z){
        cout << "Palindrome";
    }else{
        cout <<"Not a palindrome";
    }
    return 0;
}