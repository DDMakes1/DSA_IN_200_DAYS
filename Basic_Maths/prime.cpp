#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool f=true;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            f=false;
            break;
        }
    }
    if(f){
        cout << "prime he !";
    }else{
        cout << "not a prime !!";
    }
    return 0;
}