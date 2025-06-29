#include <iostream>
using namespace std;

int main(){
	//Rotate Matrix by 90 Degree.
	int n;
	cin>>n;
	int arr[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j)
			swap(arr[i][j],arr[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		/*for(int j=0;j<n;j++){
			if(j==0)	//00 02, //10 12, //20, 22
				swap(arr[i][j],arr[i][n-1]);
		}*/
		int start = 0;
		int end = n-1;
		while(start<end){
			swap(arr[i][start],arr[i][end]);
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
