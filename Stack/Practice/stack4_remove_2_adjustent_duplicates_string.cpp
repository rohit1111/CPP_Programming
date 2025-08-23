#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
		stack<char> st;
		for(int i=0;i<n;i++){
			if(st.empty()){
				st.push(s[i]);
			}else{
				if(st.top() == s[i]){
					st.pop();
				}else{
					st.push(s[i]);
				}
			}
		}
		string ansString = "";
		while(!st.empty()){
			ansString += st.top();
			st.pop();
		}

		reverse(ansString.begin(),ansString.end());

		return ansString;
    }
};

int main(){
	Solution s1;
	string s = "azxxzy";//"abbaca";
	cout<<s1.removeDuplicates(s);
	return 0;
}
