#include <iostream>
#include <vector>
using namespace std;

int main(){
	//Rotate array by K
	vector<int> nums = {1,2,3,4,5,6};
	int k = 6;
	int size = nums.size();
	if(k>=size)
		k = k%size;
	cout<<k<<endl;
	vector<int> result(size);
	for(int i =0;i<size;i++){
		if(i<k){
			int newIndex = i - k + size;
			result[newIndex] = nums[i];
		}
		else{
			int newIndex = i - k;
			result[newIndex] = nums[i];
		}
	}
	for(int i:result){
		cout << i << " ";
	}
	return 0;
}
