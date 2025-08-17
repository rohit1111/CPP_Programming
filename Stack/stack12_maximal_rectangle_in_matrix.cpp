#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> smallestElementLeft(vector<int>& heights){
	int n = heights.size();
	vector<int> ans(n,-1);
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && heights[i] < heights[st.top()]){
			ans[st.top()] = i;//heights[i];		// As we need to store the smallest element posistion in left
			st.pop();
		}
		st.push(i);
	}
	return ans;
}
vector<int> smallestElementRight(vector<int>& heights){
	int n = heights.size();
	vector<int> ans(n,n);
	stack<int> st;
	for(int i=0;i<n;i++){
		while(!st.empty() && heights[i] < heights[st.top()]){
			ans[st.top()] = i;//heights[i]; // As we need to store the smallest element posistion in right
			st.pop();
		}
		st.push(i);
	}
	return ans;	
}
void printArray(vector<int>& heights){
	for(int i=0;i<heights.size();i++){
		cout<<heights[i]<<"\t";
	}
	cout<<endl;
}
int largestRectangleArea(vector<int>& heights) {
	//cout<<"Original Array:\t\t";
	//printArray(heights);
	vector<int> leftPart = smallestElementLeft(heights);
	//cout<<"Left Array:\t\t\t";
	//printArray(leftPart);
	vector<int> rightPart = smallestElementRight(heights);
	//cout<<"Right Array:\t\t";
	//printArray(rightPart);

	int maxArea = 0;
	for(int i=0;i<heights.size();i++){
		int width = rightPart[i] - leftPart[i] - 1;
		int currentArea = heights[i] * width;
		maxArea = max(maxArea,currentArea);
	}
	return maxArea;
}
int maximalRectangle(vector<vector<char>>& matrix) {
	int N = matrix.size();
	int M = matrix[0].size();
	vector<vector<int>> heights(N,vector<int>(M,0)); 
	for(int i=0;i<M;i++){
		int sum = 0;
		for(int j =0;j<N;j++){
			if(matrix[j][i] == '1'){
				sum++;
			}
			else{
				sum=0;
			}
			heights[j][i] = sum;
		}
	}

	int answerMax = 0;
	for(int i=0;i<N;i++){
		int currentMax = largestRectangleArea(heights[i]);
		answerMax = max(answerMax,currentMax);
	}

	return answerMax;
}
int main() {
	//Maximal Rectangle
	//Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.
	vector<vector<char>> heights = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
	cout<<maximalRectangle(heights);
	return 0;
}
