/*
Topic: Queue using Array

Description:
Implementation of Queue using Array with the following operations:
- Push
- Pop
- Peek
- Display
- isEmpty
- isFull

Time Complexity:
Push      : O(1)
Pop       : O(1)
Peek      : O(1)
Display   : O(n)

Space Complexity:
O(n)
*/
#include <bits/stdc++.h>
using namespace std;

const int SIZE = 4;
int arr[SIZE];
int f = -1, r = -1;

void push(int n) {
    if (r == SIZE - 1){
        cout << "FULL\n";
        return;
    }
    if (f == -1){
        f = 0;
        r = 0;
    } else {
        r++;
    }
    arr[r] = n;
    cout << "Inserted: " << n << "\n";
}
void pop(){
    if(f==-1 && r==-1){
        cout << "Empty\n";
        return;
    }else if(f==r){
        r=-1;f=-1;
    }else{
        f++;
    }
}
bool isempty(){
    return (f==-1 && r==-1);
}
bool isfull(){
    return (r==SIZE-1);
}
void peek(){
    if(isempty()){
        cout << "EMPTY\n";
        return;
    }else{
        cout << arr[f];
    }
}
void display() {
    if (isempty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    for (int i = f; i <= r; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
