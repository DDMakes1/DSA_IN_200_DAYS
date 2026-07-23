/*
Topic: Stack using Array

Description:
Implementation of Stack using Array with the following operations:
- Push
- Pop
- Peek
- isEmpty
- isFull

Time Complexity:
Push      : O(1)
Pop       : O(1)
Peek      : O(1)
isEmpty   : O(1)
isFull    : O(1)

Space Complexity:
O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int top = -1;
int arr[10];
void push(int n){
    if(top==9){
        cout<<"FULL\n";
        return;
    }
    arr[++top]=n;
}
void pop(){
    if(top==-1){
        cout << "ARRAY IS EMPTY\n";
        return;
    }
    top--;
}
void peek(){
    if(top==-1){
        cout << "ARRAY IS EMPTY\n";
        return;
    }
    cout << arr[top];
}
bool isempty(){
    return top ==-1;
}
bool isfull(){
    return top == 9;
}