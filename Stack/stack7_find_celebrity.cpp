#include <iostream> 
#include <vector>
#include <stack>

using namespace std;
int celebrity(vector<vector<int>> &mat){
	int n = mat.size();
	stack<int> st;

	for(int i=0;i<n;i++){
		st.push(i);
	}

	while(st.size() >= 2){
		int A = st.top();
		st.pop();
		int B = st.top();
		st.pop();

		if(mat[A][B] == 1 && mat[B][A] == 0){
			st.push(B);
		}
		else if(mat[A][B] == 0 && mat[B][A] == 1){
			st.push(A);
		}
	}

	if(st.empty()){
		return -1;
	}
	else{
		int canBeCelebrity = st.top();
		for(int i=0;i<n;i++){
			if(i != canBeCelebrity){
				if(mat[canBeCelebrity][i] == 1 || mat[i][canBeCelebrity] == 0){
					return -1;
				}
			}
		}
		return canBeCelebrity;
	}
}
int main() {
	//mat[i][j] == 1, means i knows j
	//mat[j][i] == 0, means j not knows to i
	//find a celebrity which known by everyone, but he not knows anyone.
	
	vector<vector<int>> mat = {{0,1,0},{0,0,0},{0,1,1}};
	cout<<celebrity(mat);
	return 0;
}
