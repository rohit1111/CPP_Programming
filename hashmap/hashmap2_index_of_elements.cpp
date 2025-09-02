#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int n;
	cin>>n;
	map<int,vector<int>> m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x].push_back(i);
	}

	for(auto element:m){
		cout<<element.first<<" ==> ";
		for(auto i:element.second){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
