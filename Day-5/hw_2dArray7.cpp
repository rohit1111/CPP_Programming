#include <iostream>
using namespace std;

int main(){
	//HW: Print 2d Array Digonally
	int n;
	cin>>n;

	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int sum=0;sum<n+n;sum++){
		for(int i=0;i<n;i++){
			int j = sum - i;
				if(i+j == sum & j>=0 && j<n)
					cout<<arr[j][i] << " ";//cout<<i<<","<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
