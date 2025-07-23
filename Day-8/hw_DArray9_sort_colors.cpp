#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
    /*    int size = nums.size();
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
        */
    int zero=0,one=0,two=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i] == 0)
            zero++;
        else if(nums[i] == 1)
            one++;
        else
            two++;
    }
    for(int i=0;i<n;i++){
        while(zero>0){
            nums[i] = 0;
            zero--;
            i++;
        }
        while(one>0){
            nums[i] = 1;
            one--;
            i++;
        }
        while(two>0){
            nums[i] = 2;
            two--;
            i++;
        }
    }    
    }
int main(){
	//HW: Sort colors 0, 1 , 2

	vector<int> nums = {0,1,0,0,0,2,2,1,2,1};

	sortColors(nums);
	

	for(int i:nums){
		cout<<i<<" ";
	}
	return 0;
}
