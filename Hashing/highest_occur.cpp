#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;          
    cin >> n;
    int arr[n];
    map<int , int> mp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for(auto it : mp){
        cout << it.first << "-" << it.second << endl;
    }
    int maxCount = 0;
    for(auto it : mp){
        maxCount = max(maxCount, it.second);
    }
    cout << "Highest occurrence element(s): ";
    for(auto it : mp){
        if(it.second == maxCount){
            cout << it.first << " ";
        }
    }
    return 0;
}