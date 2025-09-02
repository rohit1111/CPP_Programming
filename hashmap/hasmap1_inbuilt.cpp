#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	vector<int> arr = {1,2,8,1};
	map<int,int> m;
	int n = arr.size();
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	//cout<<m[1]<<" ";
	//cout<<m[2]<<" ";
	//cout<<m[8]<<" ";


	for(auto element: m){
		cout<<element.first <<" -> "<< element.second<<endl;
	}
	return 0;
}
