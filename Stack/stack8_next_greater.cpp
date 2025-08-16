#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> nextLargerElement(vector<int>& arr){
	int n = arr.size();
	vector<int> ans(n,-1);
	stack<int> st;

	for(int i=0;i<n;i++){
		while(st.size() > 0 && arr[i] > arr[st.top()]){
			ans[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);
	}
	return ans;
}
int main() {
	vector<int> arr = {6,8,0,1,3};
	vector<int> ans = nextLargerElement(arr);
	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}
