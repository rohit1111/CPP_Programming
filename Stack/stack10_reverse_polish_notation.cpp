#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int evalRPN(vector<string>& tokens) {
	int n = tokens.size();
	stack<int> st;
	for(int i=0;i<n;i++){
		if((tokens[i] == "+") || (tokens[i] == "-")|| (tokens[i] == "*" )|| (tokens[i] == "/")){
			if(st.size()>= 2){
				int B = st.top();
				st.pop();
				int A = st.top();
				st.pop();
				//+-*/
				int ans = 0;
				if(tokens[i] == "+"){
					ans = A + B;
				}
				else if(tokens[i] == "-"){
					ans = A - B;
				}
				else if(tokens[i] == "*"){
					ans = A * B;
				}
				else if(tokens[i] == "/"){
					ans = A / B;
				}
				st.push(ans);
			}
		}
		else{
			int value = stoi(tokens[i]);	//stoi --> string to integer atoi 
			st.push(value);
			}
	}
	return st.top(); 
}

int main() {
	//Evaluate Revese Polish Notation:- Evaluate postfix matematic expression.
	vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};//{"4","13","5","/","+"};//{"2","1","+","3","*"};
	cout<<evalRPN(tokens);
	return 0;
}
