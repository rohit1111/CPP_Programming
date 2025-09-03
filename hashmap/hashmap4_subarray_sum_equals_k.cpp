#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
		int n = nums.size();
		int sum = 0;
		map<int,int> m;
		int answer = 0;

		m[0] = 1;
		for(int i=0;i<n;i++){
			sum += nums[i];
			answer += m[sum - k];
			m[sum]++;
		}
		return answer;
    }
};
int main(){
	/*
	560. Subarray Sum Equals K
	Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

	A subarray is a contiguous non-empty sequence of elements within an array.

	Example 1:

	Input: nums = [1,1,1], k = 2
	Output: 2
	*/
	Solution* s1 = new Solution();
	vector<int> nums = {1,2,3};//{1,1,1};
	int k = 3;//2;
	cout<<s1->subarraySum(nums,k);

	return 0;
}
