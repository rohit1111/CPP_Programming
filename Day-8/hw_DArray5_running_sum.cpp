#include <iostream>
#include <vector>
using namespace std;

int main(){
	//HW: Running sum of array.
	vector<int> nums = {1,2,3,4,5,6,7,8,9};

	int n = nums.size();

	vector<int> result(n,0);
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum + nums[i];
		result[i] = sum;
	}
	for(int i=0;i<n;i++){
		cout<<result[i]<<" ";
	}
	return 0;
}
