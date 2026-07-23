#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int n1=n;
    while(n1){
        cout << (n1%10);
        n1/=10;
    }
    return 0;
}

//using for loop 

int main(){
    int n;
    cin >> n;
    int n1=n;
    for(int i=n1;i>0;i/=10){
        cout << (i%10);
    }
    return 0;
}

//storing in a num
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
    cout << z;
    return 0;
}