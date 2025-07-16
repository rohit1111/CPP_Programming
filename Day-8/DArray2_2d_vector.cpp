#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<vector<int>> arr;

	vector<int> row1 = {1, 2, 3};

	arr.push_back(row1);

	vector<int> row2 = {4,5};
	arr.push_back(row2);

	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
