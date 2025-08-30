#include <iostream>
#include <queue>

using namespace std;
class Solution {
  public:
    int longestUniqueSubstring(string &s) {
		queue<char> q;
		int freq[26] = {};
		int answer = 0;
		for(int i=0;i<s.size();i++){
			freq[s[i] - 'a']++;
			q.push(s[i]);
			while(!q.empty() && freq[s[i] - 'a'] > 1){
				freq[q.front() - 'a']--;
				q.pop();
			}
			answer = max(answer,(int)q.size());
		}
		return answer;
    }
};
int main() {
	/*
	Using Queue
	Length of the longest substring: https://www.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1
	Given a string s, find the length of the longest substring without repeating characters.

	Examples:

	Input: s = "geeksforgeeks"
	Output: 7
	Explanation: Longest substring is "eksforg".
	*/
	Solution* s1 = new Solution();
	string s = "geeksforgeeks";
	cout<<s1->longestUniqueSubstring(s);
	return 0;
}
