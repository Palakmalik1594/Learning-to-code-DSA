class Solution {
  public:
  stack<int>st;
  stack<int>minim;
    Solution() {
        // code here
       
    }

    // Add an element to the top of Stack
    void push(int x) {
        st.push(x);
        if(minim.empty() || x<=minim.top()){
            minim.push(x);
        }
        // code here
    }

    // Remove the top element from the Stack
        
    void pop() {
        if(!st.empty()){
            if(st.top()==minim.top()){
                minim.pop();
            }
        st.pop();
        }
        // code here
    }

        
    // Returns top element of the Stack
    int peek() {
        return st.empty()?-1:st.top();
        // code here
    }
        

    // Finds minimum element of Stack
    int getMin() {
        return minim.empty()?-1:minim.top();
        // code here
    }
};