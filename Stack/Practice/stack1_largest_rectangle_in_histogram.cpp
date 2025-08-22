#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerLeft(vector<int>& heights){
        int n = heights.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i] < heights[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> smallerRight(vector<int>& heights){
        int n = heights.size();
        vector<int> ans(n,n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i] < heights[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;        
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> LeftSmaller = smallerLeft(heights);
        vector<int> RightSmaller = smallerRight(heights);
        int maxArea = 0;
        for(int i=0;i<heights.size();i++){
            int width = RightSmaller[i] - LeftSmaller[i] - 1;
            int currentArea = heights[i] * width;
            maxArea = max(maxArea,currentArea);
        }
        return maxArea;
    }
};

int main(){
	Solution s1;
	vector<int> heights = {2,1,5,6,2,3};
	cout << s1.largestRectangleArea(heights);
	return 0;
}
