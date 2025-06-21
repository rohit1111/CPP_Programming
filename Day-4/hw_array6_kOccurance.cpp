#include <iostream>
#include <vector>
using namespace std;
int kOccurance(vector<int> nums, int target){
		int size = nums.size();
		for(int i=0;i<size;i++){
			int count = 0;
			for(int j=0;j<size;j++){
				if(nums[i] == nums[j]){
					count++;
					}
			}
			//cout<<count<<endl;
			if(count == target){
				return nums[i];		
			}
		}
		return -1;
}
int main(){
	//find the first element that occurs k times
	vector<int> nums = {1,7,4,3,4,8,7};
	int target = 2;
	cout << kOccurance(nums,target);
	return 0;
}
