#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans = {};
		map<string,vector<string>> m;

		for(int i=0;i<strs.size();i++){
			string copy = strs[i];
			sort(copy.begin(),copy.end());
			m[copy].push_back(strs[i]);
		}

		for(auto x:m){
			ans.push_back(x.second);
		}
		return ans;
    }
};
int main() {
	/*
	49. Group Anagrams: https://leetcode.com/problems/group-anagrams/description/
	Given an array of strings strs, group the anagrams together. You can return the answer in any order.

	Example 1:

	Input: strs = ["eat","tea","tan","ate","nat","bat"]

	Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

	Explanation:

	There is no string in strs that can be rearranged to form "bat".
	The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
	The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
	*/
	Solution* s1 = new Solution();
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> result = s1->groupAnagrams(strs);
	for(auto x:result){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}
