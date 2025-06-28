#include <iostream>
using namespace std;

int main(){
	int  n = 4;
	int arr[n][n];
	//Print the array indexes
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<i<<","<<j<<" ";
		}
		cout<<endl;
	}
	//Input the array
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	//Calculate the sum-d1
	int sum=0;
	for(int i=0;i<n;i++){	
		for(int j=0;j<n;j++){
			if(i == j)
			 sum += arr[i][j];
		}
	}
	cout<<"sum-d1: "<<sum<<endl;
	
	//Calculate the sum-d1 optimized way
	sum=0;
	for(int i=0;i<n;i++){
		sum += arr[i][i];
	}
	cout<<"sum-d1: "<<sum<<endl;
	
	//Calculate the sum-d2
	sum=0;
	for(int i=0;i<n;i++){	
		for(int j=0;j<n;j++){
			if(i + j == n-1)
			 sum += arr[i][j];
		}
	}
	cout<<"sum-d2: "<<sum<<endl;
	//Calculate the sum-d2 optimized way
	//i+j = n -1 ===> j = (n-1) - i
	sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i][n - 1 - i];
	}
	cout<<"sum-d2: "<<sum<<endl;
	return 0;
}
