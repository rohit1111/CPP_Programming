#include <iostream>
using namespace std;
void moveZeros(int arr[],int size){
	int end = size-1;
	while(arr[end] == 0){
		end--;
	}
	for(int i=0;i<size;i++){
		//cout<<end<<endl;
		if(arr[i] == 0 && i<end)
			swap(arr[i],arr[end--]);		
	}
}
int main(){
	int arr[5] = {0,1,0,3,0};//{0,1,0,3,12};
	// 12,1,0,3,0
	// 12,1,0,3,0
	// 12,1,3,0,0
	moveZeros(arr,5);
	for(int i =0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//above methos changes the order.
	//Solution-2
	int n = 7;//5;
	//int arr1[n] = {0,1,0,3,0}; // o/p- 1,3,0,0,0
	int arr1[n] = {0,1,0,3,0,7,0}; // o/p- 1,3,0,0,0
	int j=0;
	for(int i=0;i<n;i++){
		if(arr1[i]!=0){
			arr1[j] = arr1[i];
			j++;
		}
	}
	for(;j<n;j++){
		arr1[j] = 0;
	}
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}

	return 0;
}
