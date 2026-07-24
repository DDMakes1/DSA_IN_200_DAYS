/*
Program Link : https://leetcode.com/problems/implement-stack-using-queues/description/

Approach :
Use a single queue.
- During push(), insert the new element at the back of the queue.
- Rotate all the previous elements behind the new element.
- This ensures that the newly inserted element always stays at the front,
  making pop() and peek() operations O(1).

Time Complexity :
push()    : O(n)
pop()     : O(1)
peek()    : O(1)
isempty() : O(1)

Space Complexity : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
queue<int> n1;
void push(int n){
    int size = n1.size();
    n1.push(n);
    for(int i=0;i<size;i++){
        n1.push(n1.front());
        n1.pop();
    }
}
void pop(){
    n1.pop();
}
int peek(){
    return n1.front();
}
int isempty(){
    return n1.empty();
}
