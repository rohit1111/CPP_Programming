#include <iostream>
using namespace std;

int main(){
	//HW: Print array digonally n*m
	int n,m;
	cin>>n>>m;

	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<i<<","<<j<<" "; //arr[i][j];
		}
		cout<<endl;
	}

	for(int sum=0;sum<m+n;sum++){
		for(int i=0;i<m;i++){
			int j = sum - i;
				if(i+j == sum & j>=0 && j<n)
					cout<<arr[j][i] << " ";//cout<<i<<","<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
