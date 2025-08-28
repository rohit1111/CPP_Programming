#include <iostream>
#include <deque>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		int n = nums.size();
		int i = 0;
		deque<int> dq;	
		vector<int> ans(n-k+1,0);
		while(i<k){
			while(!dq.empty() && nums[i] > nums[dq.back()]){
				dq.pop_back();
			}
			dq.push_back(i);
			i++;
		}

		int index=0;
		while(i<n){
			ans[index] = nums[dq.front()];
			index++;

			while(!dq.empty() && dq.front() <= (i-k)){
				dq.pop_front();
			}

			while(!dq.empty() && nums[i] > nums[dq.back()]){
				dq.pop_back();
			}
			dq.push_back(i);			
			i++;
		}
		ans[index] = nums[dq.front()]; 
		return ans;
	}
};

int main(){
	/*
	239. Sliding Window Maximum: https://leetcode.com/problems/sliding-window-maximum/description/
	You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
	Return the max sliding window.

	Example 1:

	Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
	Output: [3,3,5,5,6,7]
	Explanation: 
	Window position                Max
	---------------               -----
	[1  3  -1] -3  5  3  6  7       3
	1 [3  -1  -3] 5  3  6  7       3
	1  3 [-1  -3  5] 3  6  7       5
	1  3  -1 [-3  5  3] 6  7       5
	1  3  -1  -3 [5  3  6] 7       6
	1  3  -1  -3  5 [3  6  7]      7

	*/
	Solution* s1 = new Solution();
	vector<int> nums = {1,3,-1,-3,5,3,6,7};
	int k = 3;
	vector<int> ans = s1->maxSlidingWindow(nums,k);
	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}
