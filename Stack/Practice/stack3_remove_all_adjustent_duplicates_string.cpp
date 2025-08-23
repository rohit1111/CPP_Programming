#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
		int n = s.size();
		stack<pair<char,int>> st;
		for(int i=0;i<n;i++){
			if(st.empty()){
				st.push({s[i],1});
			}else{
				if(st.top().first == s[i]){
					st.top().second++;
				}else{
					st.push({s[i],1});
				}
			}
			if(st.top().second == k){
				st.pop();
			}
		}

		string ansString = "";
		while(!st.empty()){
			while(st.top().second > 0){
				ansString += st.top().first;
				st.top().second--;
			}
			st.pop();
		}

		reverse(ansString.begin(),ansString.end());

		return ansString;
    }
};

int main(){
	//1209: remove-all-adjacent-duplicates-in-string-ii
	//Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/
	//Input: s = "deeedbbcccbdaa", k = 3
	Solution s1;
	string s = "pbbcggttciiippooaais";//"deeedbbcccbdaa";
	int k = 2; //3;
	cout << s1.removeDuplicates(s,k);
	return 0;
}
