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
		vector<int> answer(n-k+1,0);
		while(i<k){
			while(!dq.empty() && nums[i] > nums[dq.back()]){
				dq.pop_back();
			}
			dq.push_back(i);
			i++;
		}
		int index = 0;
		while(i<n){
			answer[index] = nums[dq.front()];
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
		answer[index] = nums[dq.front()];


		return answer;
	}
};
int main() {
	// write your code here
	Solution* s1 = new Solution();
	vector<int> nums = {1,3,-1,-3,5,3,6,7};
	int k = 3;
	vector<int> answer = s1->maxSlidingWindow(nums,k);
	for(int i:answer){
		cout<<i<<" ";
	}
	return 0;
}
