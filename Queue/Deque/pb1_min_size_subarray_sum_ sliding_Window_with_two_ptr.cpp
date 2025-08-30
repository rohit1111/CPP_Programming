#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
		int n = nums.size();
		int i = 0;
		int j = 0;
		int sum = 0;
		int ans = (int)1e9;
		while(j<n){
			sum += nums[j];
			while(sum >= target && i<=j){
				ans = min(ans,(j-i+1));
				sum -= nums[i];
				i++;
			}
			j++;
		}
		if(ans == (int)1e9){
			return 0;
		}
		return ans;
    }
};
int main() {
	/*
	209. Minimum Size Subarray Sum: https://leetcode.com/problems/minimum-size-subarray-sum/description/
	Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

	Example 1:

	Input: target = 7, nums = [2,3,1,2,4,3]
	Output: 2
	Explanation: The subarray [4,3] has the minimal length under the problem constraint.

	*/
	Solution* s1 = new Solution();
	vector<int> nums = {2,3,1,2,4,3};
	int target = 7;
	cout<<s1->minSubArrayLen(target,nums);
	return 0;
}
