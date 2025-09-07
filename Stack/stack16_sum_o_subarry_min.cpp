#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define MOD 1000000007

class Solution {
public:
    vector<int> leftSmall(vector<int>& arr){
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i] < arr[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> rightSmall(vector<int>& arr){
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n,n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }    
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> left = leftSmall(arr);
        vector<int> right = rightSmall(arr);

        int sum = 0;
        for(int i=0;i<arr.size();i++){
            long kitne = ((left[i] - i) % MOD * (i-right[i]) % MOD) % MOD;
            long y = (arr[i] % MOD * kitne % MOD) % MOD;
            sum = (sum % MOD + y % MOD) % MOD;
            //sum += arr[i] * ((left[i] - i)*(i-right[i]));
        }
        return sum;
    }
};

int main() {
	/*
	907. Sum of Subarray Minimums: https://leetcode.com/problems/sum-of-subarray-minimums/description/
	Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.

	Example 1
		Input: 
			arr = [3,1,2,4]
		Output: 
			17
		Explanation: 
			Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
			Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
			Sum is 17.	
	*/
	Solution* s1 = new Solution();
	vector<int> arr = {11,81,94,43,3};//{3,1,2,4};
	cout<<s1->sumSubarrayMins(arr);
	return 0;
}
