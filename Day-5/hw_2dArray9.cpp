#include <iostream>
using namespace std;

int main(){
	//Multiplication of two matrix.

	int n;
	cin>>n;

	int arr1[n][n];
	int arr2[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr1[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr2[i][j];
		}
	}

	int result[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			result[i][j] = 0;
			for(int k=0;k<n;k++){
			//cin>>arr1[i][j];
			//0,0
			// 0,0 * 0,0 +
			// 0,1 * 1,0 +
			// 0,2 * 2,0

			//0,1
			// 0,0 * 0,1
			// 0,1 * 1,1
			// 0,2 * 2,1

			// 
			result[i][j] += arr1[i][k] * arr2[k][j]; 
			}				// 
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}			

	return 0;
}
