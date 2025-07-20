#include <iostream>
#include <vector>
using namespace std;
vector<int> CalOddArray(int inputArray[],int size){
	vector<int> result = {};
	for(int i=0;i<size;i++){
		if(inputArray[i]%2 != 0){
			result.push_back(inputArray[i]);
		}
	}
	return result;
}
int main(){
	//HW:Create function which returns odd eement array from given array.
	int inputArray[] = {1,2,3,4,5,6,7,8,9};
	int sizea = sizeof(inputArray)/sizeof(inputArray[0]);
	vector<int> result = CalOddArray(inputArray, sizea);
	for(int i:result){
		cout<< i <<" ";
	}
	cout<<endl;
	return 0;
}
