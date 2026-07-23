#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s=0;
    int n1=n;
    while(n1){
        int r=n1%10;
        s+=(r*r*r);
        n1/=10;
    }
    if(n==s){
        printf("Armstrong he !");
    }else{
        printf("Nahi he re baba !!");
    }
    return 0;
}