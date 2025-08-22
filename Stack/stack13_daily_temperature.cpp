#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
		stack<int> st;
		for(int i=0;i<n;i++){
			while(!st.empty() && temperatures[i] > temperatures[st.top()]){
				ans[st.top()] = i - st.top();
				st.pop();
			}
			st.push(i);
		}
		return ans;
	}
};
int main(){
	//Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.
	Solution s1;
	vector<int> temperatures = {73,74,75,71,69,72,76,73};
	vector<int> ans =  s1.dailyTemperatures(temperatures);

	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}
