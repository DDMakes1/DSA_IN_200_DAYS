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
Approach 2 : */
#include <bits/stdc++.h>
using namespace std;

// Class to implement Minimum Stack
class MinStack {
private:
    // Initialize a stack
    stack <int> st;
    // To store the minimum value 
    int mini;
    
public:
    
    // Empty Constructor
    MinStack() {
    }
    
    // Method to push a value in stack
    void push(int value) {
        
        // If stack is empty
        if(st.empty()) {
            //Update the minimum value
            mini = value;
            
            // Push current value as minimum
            st.push( value );
            return;
        }
        
        // If the value is greater than the minimum
        if(value > mini) {
            st.push(value);
        }
        else {
            // Add the modified value to stack
            st.push(2 * value - mini);
            // Update the minimum
            mini = value;
        }
    }
    
    // Method to pop a value from stack
    void pop() {
        // Base case
        if(st.empty()) return;
        
        // Get the top
        int x = st.top();
        st.pop(); // Pop operation
        
        // If the modified value was added to stack
        if(x < mini) {
            // Update the minimum
            mini = 2 * mini - x;
        }
    }
    
    // Method to get the top of stack
    int top() {
        // Base case
        if(st.empty()) return -1;
        
        // Get the top
        int x = st.top();
        
        // Returnn top if minimum is less than the top
        if(mini < x) return x;
        
        //Otherwise return mini
        return mini;
    }
    
    // Method to get the minimum in stack
    int getMin() {
        // Return the minimum
        return mini;
    }
};

int main() {
    MinStack s;
    
    // Function calls
    s.push(-2);
    s.push(0);
    s.push(-3);
    cout << s.getMin() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.getMin();
    
    return 0;
}
