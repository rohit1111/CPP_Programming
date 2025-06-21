#include <iostream> 
#include <vector>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 = 0;
        int max2 = 0;
        for(int i=0;i<(int)nums.size();i++){
            if(nums[i] == 1){
                max1++;
                if(max2 < max1)
                    max2 = max1;
            }
            else{
                max1 = 0;
            }
        }

        return (max2>max1)?max2:max1;
    }

int main() {
	//HW:Max cnsecutive ones.
	vector<int> nums = {1,1,0,1,1,1,1,0,1,0,1,1,1,0};
	cout << findMaxConsecutiveOnes(nums);
	return 0;
}
