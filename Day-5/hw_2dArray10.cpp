#include <iostream>
using namespace std;

int main(){
	//HW: Rotate array 180 Degree
	// 1 2 3		9 8 7 
	// 4 5 6	=>  6 5 4
	// 7 8 9 		3 2 1

	// 3 2 1		9 8 7
	// 6 5 4	=>  6 5 4 
	// 9 8 7		3 2 1

	int n;
	cin>>n;

	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		int start = 0;
		int end = n-1;
		while(start < end){
			swap(arr[i][start],arr[i][end]);
			start++;
			end--;
		}

	}

	for(int i=0;i<n;i++){
		int start = 0;
		int end = n-1;
		while(start < end){
			swap(arr[start][i],arr[end][i]);
			start++;
			end--;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
