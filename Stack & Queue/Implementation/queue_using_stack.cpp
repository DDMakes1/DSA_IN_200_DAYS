#include<bits/stdc++.h>
using namespace std;

/*
Program Link : https://leetcode.com/problems/implement-queue-using-stacks/description/

Approach 1 : Push is Costly
Use two stacks s1 and s2.
Whenever a new element is pushed, move all elements from s1 to s2,
push the new element into s1, then move all elements back from s2 to s1.
This keeps the front element always on the top of s1.

Time Complexity :
push()    : O(n)
pop()     : O(1)
peek()    : O(1)
isempty() : O(1)

Space Complexity : O(n)


------------------------------

Approach 2 : Push is Efficient
Use two stacks s1 and s2.
Push every new element into s1.
Whenever pop() or peek() is called and s2 is empty,
transfer all elements from s1 to s2.
This reverses the order and the oldest element becomes the top of s2.

Time Complexity :
push()    : O(1)
pop()     : Amortized O(1)
peek()    : Amortized O(1)
isempty() : O(1)

Space Complexity : O(n)
*/

//Approach 1
stack<int> s1, s2;
void push(int x){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}
void pop(){
    s1.pop();
}
int peek(){
    return s1.top();
}
bool isempty(){
    return s1.empty();
}


//------------------------------------------------------------------------------------------------------


//Approach 2
void push(int x){
    s1.push(x);
}
void pop(){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    s2.pop();
}
int peek(){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    return s2.top();
}
bool isempty(){
    return s1.empty() && s2.empty();
}