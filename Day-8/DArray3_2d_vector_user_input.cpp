#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<vector<int>> arr;
	int rows;
	cin>>rows;
	for(int i=0;i<rows;i++){
		int col;
		cin>>col;
		vector<int> row;
		for(int j=0;j<col;j++){
			int x;
			cin>>x;
			row.push_back(x);
		}
		arr.push_back(row);
	}

	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
