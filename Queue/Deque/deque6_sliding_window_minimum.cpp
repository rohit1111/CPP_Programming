#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    vector<int> minSlidingWindow(vector<int>& nums, int k) {
		int n = nums.size();
		int i = 0;
		deque<int> dq;

		while(i<k){
			while(!dq.empty() && nums[i] < nums[dq.back()]){
				dq.pop_back();
			}
			dq.push_back(i);
			i++;
		}
		int index = 0;
		vector<int> ans(n-k+1,0);

		while(i<n){
			ans[index] = nums[dq.front()];
			index++;

			while(!dq.empty() && dq.front() <= (i-k)){
				dq.pop_front();
			}
			while(!dq.empty() && nums[i] < nums[dq.back()]){
				dq.pop_back();
			}
			dq.push_back(i);
			i++;			
		}
		ans[index] = nums[dq.front()];
		return ans;
	}
};
int main() {
	Solution* s1 = new Solution();
	vector<int> nums = {1,3,-1,-3,5,3,6,7};
	int k = 3;
	vector<int> answer = s1->minSlidingWindow(nums,k);
	for(int i:answer){
		cout<<i<<" ";
	}
	return 0;
}
