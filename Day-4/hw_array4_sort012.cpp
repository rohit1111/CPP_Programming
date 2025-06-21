#include <iostream>
#include <vector>
using namespace std;
 void sortColors(vector<int>& nums) {
        int size = nums.size();
        int i=0;
        int j=0;
        int value = 0;
        for(int i=0;i<size;i++){
            if(nums[i] == value){
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
        value++;
        for(int i=j;i<size;i++){
            if(nums[i] == value){
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
    }
int main(){
	vector<int> nums = {2,0,2,1,1,0};
	sortColors(nums);
	for(int i:nums){
		cout<<i<<" ";
	}
	return 0;
}
