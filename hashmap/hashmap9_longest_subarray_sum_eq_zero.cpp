#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution {
  public:
	int longestSumarraySumZero(vector<int>& nums){
		int ans = 0;
		int target = 0;
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
	int longestSumarraySumZeroOptimized(vector<int>& nums){
		int n = nums.size();
		map<int,vector<int>> m;
		int ans = 0;
		int sum = 0;
		m[0].push_back(-1);
		for(int i=0;i<n;i++){
			sum += nums[i];
			m[sum].push_back(i);
			if(m[sum].size() > 1){
				ans = max(ans,m[sum].back() - m[sum].front());
			}
		}
		/*
		for(auto i:m){
			cout<<i.first<<"->";
			for(auto element:i.second){
				cout<<element<<" ";
			}
			cout<<endl;
		}
		*/
		return ans;
	}
};
int main() {
	/*
	Largest subarray with 0 sum: https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
	Given an array arr[] containing both positive and negative integers, the task is to find the length of the longest subarray with a sum equals to 0.

	Note: A subarray is a contiguous part of an array, formed by selecting one or more consecutive elements while maintaining their original order.

	Examples:
		Input: 
			arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
		Output: 
			5
		Explanation: 
			The longest subarray with sum equals to 0 is [-2, 2, -8, 1, 7].	
	*/
	Solution* s1 = new Solution();
	vector<int> nums = {-31,-48,-90,54,20,95,6,-86,22};//{15,-2,2,-8,1,7,10,23};
	cout<<"TC O(n^2) : "<<s1->longestSumarraySumZero(nums)<<endl;
	cout<<"TC O(n) : "<<s1->longestSumarraySumZeroOptimized(nums)<<endl;
	return 0;
}
