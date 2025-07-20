#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
	int n = nums.size();
	int i = 0;
	int j = 0;
	int index = 0;
	while(i<n){
	nums[index] = nums[i];
			index++;

			while(j<n && nums[i] == nums[j]){
				j++;
			}
			
			i = j;
		}
		return index;
}
int main(){
	//HW: Remve duplicates from sorted arry
	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

	int result = removeDuplicates(nums);
	for(int i=0;i<result;i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
