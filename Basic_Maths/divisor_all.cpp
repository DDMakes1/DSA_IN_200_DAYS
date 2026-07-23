#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

//optimal approach
int main(){  // but this will give unsorted order of the divisor;
    int n;
    cin >> n;
    for(int i=1;i<=(int)sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
            if ((n/i) != i){
                cout << (n/i) << " ";
            }
        }
    }
    return 0;
}