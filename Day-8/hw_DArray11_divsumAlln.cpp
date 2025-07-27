#include <iostream>
#include <vector>

using namespace std;

int main(){
	//DIVSUM
	int n = 500000+1;
	vector<int> sumDivisiors(n, 0);


	for(int i=1;i<n;i++){
		for(int j=2*i;j<n;j+=i){
			sumDivisiors[j] += i;
		}
	}
	int T;
	cin>>T;
	for(int k=0;k<T;k++){
	int query;
	cin>>query;
		cout<<sumDivisiors[query]<<endl;
	}

	return 0;
}
