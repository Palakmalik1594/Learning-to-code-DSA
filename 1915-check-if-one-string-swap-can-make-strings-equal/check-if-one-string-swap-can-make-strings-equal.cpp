class Solution {
public:
    
bool areAlmostEqual(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();

    if (n != m) return false; 

    vector<int> diffIndices;

    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            diffIndices.push_back(i);
        }
    }

    if (diffIndices.empty()) return true; 
    if (diffIndices.size() != 2) return false; 
    swap(s1[diffIndices[0]], s1[diffIndices[1]]);
    return s1 == s2;

    }
};