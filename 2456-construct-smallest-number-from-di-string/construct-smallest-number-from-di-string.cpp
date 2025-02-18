class Solution {
public:
    string smallestNumber(string pattern) {
        string result = "";
        stack<int> st;

        for (int i = 0; i <= pattern.size(); i++) {
            st.push(i + 1);

            // If it's the last character or an 'I', pop all elements from the stack
            if (i == pattern.size() || pattern[i] == 'I') {
                while (!st.empty()) {
                    result += to_string(st.top());
                    st.pop();
                }
            }
        }
        
        return result;
    
    }
};