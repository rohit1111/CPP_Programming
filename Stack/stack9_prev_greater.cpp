#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> prevLargerElement(vector<int>& arr){
	int n = arr.size();
	vector<int> ans(n,-1);
	stack<int> st;

	for(int i=n-1;i>=0;i--){	
		while(st.size() > 0 && arr[i] > arr[st.top()]){
			ans[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);
	}
	return ans;
}
int main() {
	vector<int> arr = /*{8,1,3,4,10};*/{10, 4, 2, 20, 40, 12, 30};//{6,8,0,1,3};
	vector<int> ans = prevLargerElement(arr);
	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}
