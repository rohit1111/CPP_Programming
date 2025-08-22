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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
		int col = matrix[0].size();
		vector<vector<int>> heights(row,vector<int>(col,0));

		for(int i=0;i<col;i++){
			int sum = 0;
			for(int j=0;j<row;j++){
				if(matrix[j][i] == '1'){
					sum += 1;
				}
				else{
					sum = 0;
				}
				heights[j][i] = sum;
			}
		}
		int maxArea = 0;
		for(int i=0;i<row;i++){
			int currentArea = largestRectangleArea(heights[i]);
			maxArea = max(maxArea,currentArea);
		}
		return maxArea;
    }
};
int main(){
	Solution s1;
	vector<vector<char>> heights = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
	cout << s1.maximalRectangle(heights);
	return 0;
}
