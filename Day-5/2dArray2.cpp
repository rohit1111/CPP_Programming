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

	//Row-Wsie Print
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			//cout<<i<<","<<j<<" ";
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//Column-Wise Print
	for(int j=0;j<5;j++){
		for(int i=0;i<4;i++){
			//cout<<i<<","<<j<<" ";
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
