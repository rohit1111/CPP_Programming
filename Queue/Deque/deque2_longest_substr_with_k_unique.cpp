#include <iostream>
#include <deque>
using namespace std;


class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.size();
		deque<char> dq;
		int i = 0;
		int count = 0;
		int freq[26] = {};
		int answer = -1;
		for(int i =0;i<n;i++){
			dq.push_back(s[i]);
			int val = s[i] - 'a';
			if(freq[val] == 0){
				count++;
				freq[val]++;
			}else{
				freq[val]++;
			}

			while(!dq.empty() && count > k){
				freq[dq.front() - 'a']--;
				if(freq[dq.front() - 'a'] == 0){
					count--;
				}
				dq.pop_front();
			}

			if(count == k){
				answer = max(answer,(int)dq.size());
			}
		}
		return answer;
    }
};
int main(){
	/*
	https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
	You are given a string s consisting only lowercase alphabets and an integer k. Your task is to find the length of the longest substring that contains exactly k distinct characters.

	Note : If no such substring exists, return -1. 

	Examples:

	Input: s = "aabacbebebe", k = 3
	Output: 7
	Explanation: The longest substring with exactly 3 distinct characters is "cbebebe", which includes 'c', 'b', and 'e'.
	*/
	Solution* s1 = new Solution();
	string s = "aabaaab";//"aabacbebebe";
	int k = 2;//3;
	cout<<s1->longestKSubstr(s,k);
	return 0;
}
