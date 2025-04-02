//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int i=0;
        int j=0;
        list<int>l;
        vector<int>v;
        while(j<arr.size()){
            if(arr[j]<0){
                l.push_back(arr[j]);
            }
            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){
                if(l.size()==0){
                    v.push_back(0);
                }else{
                    v.push_back(l.front());
                }
                if(!l.empty() && arr[i]==l.front()){
                    l.pop_front();
                }
                i++;
                j++;
            }
        }
        return v;
        
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.firstNegInt(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends