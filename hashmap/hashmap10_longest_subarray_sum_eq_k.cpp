#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
	public:
	int longestSumarraySumK(vector<int>& nums,int k){
		int ans = 0;
		int target = k; //15;//0;
		int n = nums.size();
		for(int i=0;i<n;i++){
			int currentAns = 0;
			int countIndex = 0;
			for(int j=i;j<n;j++){
				currentAns += nums[j];
				countIndex++;
				if(currentAns == target){
					ans = max(ans,countIndex);
				}
				//cout<<currentAns<<" ";
			}
			//cout<<endl;
		}
		return ans;
	}
	int longestSumarraySumKOptimized(vector<int>& nums, int k){
		int n = nums.size();
		map<int,int> m;
		int ans = 0;
		int sum = 0;
		m[0] = -1;
		for(int i=0;i<n;i++){
			sum += nums[i];
			if(m.find(sum-k) != m.end())
				ans = max(ans,i - m[sum - k]);
			if(m.find(sum) == m.end())
				m[sum] = i;
		}
		return ans;
	}
};
int main() {
	/*
	Longest Subarray with Sum K: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
	Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.
	Examples:
		Input: 
			arr[] = [10, 5, 2, 7, 1, -10], k = 15
		Output: 
			6
		Explanation: 
			Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.	
	*/
	Solution* s1 = new Solution();
	vector<int> nums = {10, 5, 2, 7, 1, -10};//{10,5,2,7,1,9};
	int k = 15;
	cout<<"TC O(n^2) : "<<s1->longestSumarraySumK(nums,k)<<endl;
	cout<<"TC O(n) : "<<s1->longestSumarraySumKOptimized(nums,k);
	return 0;
}
