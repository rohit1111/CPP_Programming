#include <iostream>
using namespace std;

int main(){
	//Ass two matrices
	int n;
	cin>>n;

	int arr1[n][n];
	int arr2[n][n];
	
	//Input 2D Array-1
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr1[i][j];
		}
	}

	//Input 2D Array-2
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr2[i][j];
		}
	}

	//Add the two matrices
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr1[i][j] += arr2[i][j];
		}
	}

	//Print the output matricx
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
