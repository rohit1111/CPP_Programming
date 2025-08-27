#include <iostream>
#include <deque>
#include <vector>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
		int i = 0;
		deque<int> dq;
		int zero = 0;
		int answer = 0;
		while(i<n){
			dq.push_back(nums[i]);
			if(nums[i] == 0){
				zero++;
			}

			while(!dq.empty() && zero > k){
				if(dq.front() == 0){
					zero--;
				}
				dq.pop_front();
			}
			answer = max(answer,(int)dq.size());
			i++;
		}
		return answer;
    }
};

int main(){
	/*
	https://leetcode.com/problems/max-consecutive-ones-iii/description/
	Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

	Example 1:

	Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
	Output: 6
	Explanation: [1,1,1,0,0,1,1,1,1,1,1]
	Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
	*/
	
	Solution* s1 = new Solution();
	vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};//{1,1,1,0,0,0,1,1,1,1,0};
	int k = 3;//2;
	cout<<s1->longestOnes(nums,k);
	return 0;
}
