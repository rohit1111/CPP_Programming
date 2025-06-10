#include <iostream>
using namespace std;
bool isSorted(int arr[], int n){
	for(int i=0;i<n-1;i++){
		if(arr[i] < arr[i+1])
			continue;
		else
			return false;

	}
	return true;
}
int main(){
	//HW: Check if array is sorted or not;
	int n = 10;
	//int arr[n] = {10, 2, 30, 4, 50, 6, 70, 80, 90, 100};
	int arr[n] = {1, 2, 30, 40, 50, 60, 70, 80, 90, 100};
	if(isSorted(arr,n))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
