#include <iostream>
using namespace std;

int main(){
	//Find the array is lower triangular or not
	int n;
	cin>>n;

	int arr1[n][n];

	//Input 2d Array
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr1[i][j];
		}
	}

	//Find lower triangular matricx
	int flag=0;
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j>i && arr1[i][j] != 0){
				cout<<i<<","<<j<<" ";
				flag =1;
				break;
		}
		}
		if(flag == 1)
			break;
	}
	if(flag == 0)
		cout<<"Matrix is lower triangular";	
	else
		cout<<"Matrix is not lower triangular";
	return 0;
}
