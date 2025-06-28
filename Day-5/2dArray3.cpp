#include <iostream>
using namespace std;

int main(){
	int arr[4][5];

	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			//cout<<i<<","<<j<<" ";
			cin>>arr[i][j];
		}
	}

	//Row-Wsie Sum
	for(int i=0;i<4;i++){
		int sum = 0;
		for(int j=0;j<5;j++){
			//cout<<i<<","<<j<<" ";
			sum +=arr[i][j];
		}
		cout<<sum<<endl;
	}
	cout<<endl;
	
	return 0;
}
