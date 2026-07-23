#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n1;
    cin >> n >> n1;
    while(n > 0 && n1 > 0){
        if(n1>n){
            n1=n1%n;
        }else{
            n=n%n1;
        }
    }
    if(n1==0){
        cout << "GCD :" << n;
    }else{
        cout << "GCD:" << n1;
    }
    return 0;

}