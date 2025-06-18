#include <iostream>
using namespace std;

int main(){
	//HW: two sum, check if two elements sum from array is equal to target.

	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int target;
	cin>>target;

	int LoPtr = 0;
	int HiPtr = n-1;

	for(int i=0;i<n;i++){
		if(arr[LoPtr]+arr[HiPtr] == target){
			cout<<LoPtr<<" "<<HiPtr<<endl;
			break;
		}
		else if(arr[LoPtr]+arr[HiPtr] > target)
			HiPtr--;
		else
			LoPtr++;
	}
	
	return 0;
}
