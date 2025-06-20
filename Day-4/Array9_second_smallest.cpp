#include <iostream>
using namespace std;

int main(){
	//Find the smallest and the second smallest number from the array.
	int arr[8] = {12, 25,8,8,10,33,17,11};
	//Solution-1: O(n) + O(n) = O(n): Two loops.
	int smallest=arr[0], secondSmallest=arr[0];
	for(int i=1;i<8;i++){
		if(smallest > arr[i])
			smallest = arr[i];	
	}
	for(int i=1;i<8;i++){
		if(secondSmallest > arr[i] && arr[i] != smallest)
			secondSmallest = arr[i];	
	}
	cout<<secondSmallest<<endl;

	//Solution-2: In O(n): Signle loop
	smallest=arr[0], secondSmallest=arr[0];
	for(int i=1;i<8;i++){
		if(smallest > arr[i]){
			secondSmallest = smallest;
			smallest = arr[i];
		}
		else if(secondSmallest > arr[i] && arr[i] != smallest)
			secondSmallest = arr[i];	
	}
	cout<<secondSmallest<<endl;
	return 0;
}
