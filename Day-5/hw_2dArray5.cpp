#include <iostream>
using namespace std;

int main(){
	//HW: Find sum of Lower triangular matrics
	int n;
	cin>>n;

	int arr1[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr1[i][j];
		}
	}

	int flag=0, sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j>i && arr1[i][j] != 0){
				//cout<<i<<","<<j<<" ";
				flag=1;
			}
			else if(i>j){
				cout<<i<<","<<j<<" ";
				sum += arr1[i][j];
			}
		}
	}
	if(flag==0)
		cout<<"Sum of Lower Triangular Matrix: "<<sum<<endl;
	else
		cout<<"Not a Lower triangular matricx"<<endl;

	return 0;
}
