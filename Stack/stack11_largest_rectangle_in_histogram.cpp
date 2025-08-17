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
	cout<<"Original Array:\t\t";
	printArray(heights);
	vector<int> leftPart = smallestElementLeft(heights);
	cout<<"Left Array:\t\t\t";
	printArray(leftPart);
	vector<int> rightPart = smallestElementRight(heights);
	cout<<"Right Array:\t\t";
	printArray(rightPart);

	int maxArea = 0;
	for(int i=0;i<heights.size();i++){
		int width = rightPart[i] - leftPart[i] - 1;
		int currentArea = heights[i] * width;
		maxArea = max(maxArea,currentArea);
	}
	return maxArea;
}
int main() {
	//Largest Rectangle in Histogram
	//Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram
	vector<int> heights = /*{2,4};*/{2,1,5,6,2,3};
	cout<<largestRectangleArea(heights);
	return 0;
}
