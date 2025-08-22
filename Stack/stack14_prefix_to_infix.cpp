#include <iostream>
#include <stack>
using namespace std;

class Solution {
  public:
    bool isAlphabet(char ch){
        if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
            return true;
        }
        else{
            return false;
        }
    }  
    string postToInfix(string exp) {
        int n = exp.size();
        stack<string> st;
        for(int i=0;i<n;i++){
            if(isAlphabet(exp[i])){
                st.push(string(1,exp[i]));
            }
            else{
                if(st.size() >= 2){
                    string B = st.top();
                    st.pop();
                    string A = st.top();
                    st.pop();
                    st.push("("+ A + string(1,exp[i]) + B + ")");
                }
            }
        }
        if(!st.empty()){
            return st.top();
        }
    }
};

int main(){
    //You are given a string that represents the postfix form of a valid mathematical expression. Convert it to its infix form
	Solution s1;
	string exp = "ab*c+";
	cout << s1.postToInfix(exp);
	return 0;
}
