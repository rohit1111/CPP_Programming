#include <iostream> 
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int answer = 0;
        int n = nums.size();
        map<int,int> m;

        m[0] = 1;

        for(int i=0;i<n;i++){
            sum += nums[i];
            sum %=k;
            if(sum<0){
                sum +=k;
            }
            answer += m[(sum%k)];
            m[sum]++;
        }
        return answer;
    }
};
int main() {
	/*
	974. Subarray Sums Divisible by K: https://leetcode.com/problems/subarray-sums-divisible-by-k/description/
	Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

	A subarray is a contiguous part of an array.

	Example 1:

	Input: nums = [4,5,0,-2,-3,1], k = 5
	Output: 7
	Explanation: There are 7 subarrays with a sum divisible by k = 5:
	[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]
	*/
	Solution* s1 = new Solution();
	vector<int> nums = {4,5,0,-2,-3,1};
	int k = 5;
	cout<<s1->subarraysDivByK(nums,k);
	return 0;
}
