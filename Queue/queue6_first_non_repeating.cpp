#include <iostream>
#include <queue>
using namespace std;

class Solution {
  public:
    string FirstNonRepeating(string &s) {
        queue<char> q;
		int freq[26] = {};
		string ans = "";
		for(int i=0;i<s.size();i++){
			int val = s[i] - 'a';
			if(freq[val] == 0){
				q.push(s[i]);
				freq[val] = 1;
			}else{
				freq[val]++;
			}
			while(!q.empty() && freq[q.front() - 'a'] > 1){
				q.pop();
			}

			if(q.empty()){
				ans += '#';
			}else{
				ans += q.front();
			}
		}
		return ans;
    }
};

int main(){
	//Stream First Non-repeating: https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
	/*
	Given an input stream s consisting only of lowercase alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.

	NOTE:
	1. You need to find the answer for every i (0 <= i < n)
	2. In order to find the solution for every you need to consider the string from starting position till the ith position.	

	Input: s = "aabc"
	Output: "a#bb"
	Explanation: For every ith character we will consider the string from index 0 till index i first non repeating character is as follow- "a" - first non-repeating character is 'a' "aa" - no non-repeating character so '#' "aab" - first non-repeating character is 'b' "aabc" - there are two non repeating characters 'b' and 'c',  first non-repeating character is 'b' because 'b' comes before 'c' in the stream.	
	*/
	Solution* s1 = new Solution();
	string s = "zz";//"aabc";
	cout<<s1->FirstNonRepeating(s);

	return 0;
}
