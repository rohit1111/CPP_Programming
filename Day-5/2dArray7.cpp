#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<i<<","<<j<<" ";
		}
		cout<<endl;
	}
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}	
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j >= i)
				cout<<arr[i][j]<<" ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}	
	return 0;
}
