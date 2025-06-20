#include <iostream>
using namespace std;
double median(int arr[], int size){
	if(size%2 ==0)
		return (arr[size/2 -1] + arr[size/2])/2.0;
	else
		return arr[size/2];
}
int main(){
	int arr1[8] = {12,25,8,8,11,33,17,11};
	int arr2[9] = {12,25,8,8,10,33,17,11,12};

	cout<<median(arr1,8)<<endl;
	cout<<median(arr2,9)<<endl;
	return 0;
}
