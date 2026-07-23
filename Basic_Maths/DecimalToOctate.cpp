#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number in decimal(Base 10) :";
    cin >> n;
    //Decimal to Octal
    int ans=0,i=0; int rem;
    while(n){
        rem = n%8;
        ans+= rem*pow(10,i);
        n/=8;
        i++;
    }
    cout << "Decimal to octal :"<< ans;
    return 0;

}