#include <iostream>
using namespace std;
bool isPresent(int arr[], int n, int target){
	for(int i =0;i<n;i++){
		if(arr[i] == target)
			return true;
	}
	return false;
}
int main(){
	int n = 10;
	int arr[n] = {10, 2, 30, 4, 50, 6, 70, 80, 90, 100};

	int target;
	cin>>target;

	if(isPresent(arr,n,target))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return true;
}
