/*
Problem Link : https://leetcode.com/problems/min-stack/description/

Approach 1:
We need to design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

To achieve this, we store each element along with the minimum value so far in the stack as a pair.
- When we push a new value:
  - If the stack is empty, the min is the value itself.
  - Otherwise, compare the new value with the current minimum (top.second) and store the smaller one.
- When we pop, we simply remove the top element.
- The top of the stack gives us the latest pushed value (top.first).
- The minimum at any point is stored in top.second.

TC : O(1) for each operation (push, pop, top, getMin).
SC : O(N) for stack space.
*/

#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>> st;

void push(int value){
    if (st.empty()){
        st.push({value, value});
    } else {
        int mini = min(value, st.top().second);
        st.push({value, mini});
    }
}

void pop() {
    st.pop();
}

int top() {
    return st.top().first;
}

int getMin() {
    return st.top().second;
}

/*
Approach 2 :



*/
