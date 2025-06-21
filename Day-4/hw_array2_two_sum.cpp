#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumV(vector<int> arr,int target){
	int size = arr.size();
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(i!=j){
				if(arr[i] + arr[j] == target)
					return {i,j};
			}
		}
	}
	return {};
}
void twoSum(int arr[], int size, int target, int result[]){
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(i!=j){
				if(arr[i] + arr[j] == target){
					result[0] = i;
					result[1] = j;
					return;
					//return {i,j};
				}
			}
		}
	}
	return;
}
int main(){
	//HW: Two Sum.
	//I/P: Array: 2,7,11,15 and target=9
	//O/P: indices of two numbers
	//Condition: Not to use the same number.
	int n = 4;
	int arr[n] = {2,7,11,15};
	int target = 9;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i!=j){
				if(arr[i] + arr[j] == target){
					cout<<i<<" "<<j<<endl;
					break;
				}
			}
		}
	}

	//Using Function-1: Here passing the result array like standard C or C++ before 11 to get the output. 
	//I/P: array, size of array, target, result for o/p
	int result[2]={0};
	twoSum(arr,n,target,result);
	cout << result[0] << " " << result[1] <<endl;

	//Using Function-2: return output using vectors
	//I/P: vector, target
	vector<int> resultV = {0};
	vector<int> arrV = {2,7,11,15};
	resultV = twoSumV(arrV,target);
	cout << resultV[0] << " " << resultV[1] <<endl;

	return 0;
}
