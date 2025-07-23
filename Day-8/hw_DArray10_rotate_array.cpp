#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& nums, int start, int end){
	while(start<end){
		swap(nums[start],nums[end]);
		start++;
		end--;
	}  
}
void rotate(vector<int>& nums, int k) {

    int n = nums.size();
    k = k%n;
    reverse(nums, 0, n-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, n-1);
}
int main(){
	//HW: Rotate array

	vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
	int k =4;
	rotate(nums, k);
	

	for(int i:nums){
		cout<<i<<" ";
	}
	return 0;
}
