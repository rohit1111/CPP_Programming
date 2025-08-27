#include <iostream> 
#include <queue>

using namespace std;

class Solution {
  public:
    string FirstNonRepeating(string &s) {
		queue<char> q;
		int n = s.size();
		int freq[26] = {};	//As 26 alphabets in english.
		string answer = "";

		for(int i=0;i<n;i++){
			int val = s[i] - 'a';
			//if(q.empty()){
			if(freq[val] == 0){			// Only to be pushed in queue if freq of char is zero
				q.push(s[i]);
				freq[val] = 1;
			}
			else{
				freq[val]++;
			}

			while(!q.empty() && freq[q.front() - 'a'] > 1){
				q.pop();
			}

			if(q.empty()){
				answer += "#";
			}else{
				answer += q.front();
			}
		}
		return answer;
	}
};

int main() {
	Solution* s1 = new Solution();
	string s = "abccbaeded";//"aabc";
	cout<<s1->FirstNonRepeating(s);
	return 0;
}
