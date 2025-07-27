#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> nums;
    int countPrimes(int n) {
        if(n <= 1)
            return 0;
        nums.resize(n,0);
        nums[0] = 1;
        nums[1] = 1;
        for(int i=2;i<n;i++){
            nums[i] = 0;
        }

        for(long i=2;i<n;i++){         // i=1, j=2 
            for(long j=i*i;j<n;j+=i){
                nums[j] = 1; 
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                count++;
            }
        }
        return count;
    }
};
int main(){
	//Count Prime Numbers between 1 and N
	Solution *S1 = new Solution();

	cout << S1->countPrimes(10);

	delete S1;

	return 0;
}
