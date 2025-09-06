#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
		map<int,vector<int>> m;
		int n = nums.size();

		for(int i=0;i<n;i++){
			m[nums[i]].push_back(i);
		}

		vector<int> ans;
		for(int i=0;i<queries.size();i++){
			if(queries[i] > m[x].size()){
				ans.push_back(-1);
			}else{
				ans.push_back(m[x][queries[i]-1]);
			}
		}
		return ans;
    }
};

int main(){
	/*
	3159. Find Occurrences of an Element in an Array: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/description/
	
	You are given an integer array nums, an integer array queries, and an integer x.

	For each queries[i], you need to find the index of the queries[i]th occurrence of x in the nums array. If there are fewer than queries[i] occurrences of x, the answer should be -1 for that query.
	
	Return an integer array answer containing the answers to all queries.

	Example 1:

	Input: nums = [1,3,1,7], queries = [1,3,2,4], x = 1
	Output: [0,-1,2,-1]
	Explanation:

	For the 1st query, the first occurrence of 1 is at index 0.
	For the 2nd query, there are only two occurrences of 1 in nums, so the answer is -1.
	For the 3rd query, the second occurrence of 1 is at index 2.
	For the 4th query, there are only two occurrences of 1 in nums, so the answer is -1.

	*/
	Solution* s1 = new Solution();
	vector<int> nums = {1,3,1,7};
	int x = 1;
	vector<int> queries = {1,3,2,4};
	vector<int> result = s1->occurrencesOfElement(nums,queries,x);
	for(auto i:result){
		cout<<i<<" ";
	}
	return 0;
}
