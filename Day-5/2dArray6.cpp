#include <iostream>
using namespace std;


int main(){
	//Print Upper trangular elements
	int n;
	cin>>n;

	int arr[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<i<<","<<j<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}	
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j < n)
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
