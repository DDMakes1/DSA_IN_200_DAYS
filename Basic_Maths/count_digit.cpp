#include<bits\stdc++.h>
using namespace std;
int main(){
    int c=0;
    int n;
    cin >> n;
    int temp=n;
    while(temp!=0){
        temp=temp/10;
        c++;
    }
    // cout << c;

// optimal approach 
    int x=(int)(log10(n)+1);
    cout << x;
    return 0;
}
