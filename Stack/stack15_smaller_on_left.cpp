#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        stack<int> st;
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i] < arr[st.top()]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};

int main(){
	Solution s1;
	vector<int> heights = {1, 5, 0, 3, 4, 5};//{1,6,2};
	vector<int> ans = s1.leftSmaller(heights);
    for(int i:ans){
        cout<<i<<" ";
    }
	return 0;
}
