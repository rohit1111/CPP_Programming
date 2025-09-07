#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution{
	public:
		int solve(vector<int>& A,int B);
};
int Solution::solve(vector<int> &A, int B) {
    map<int,int> m;
    int ans = 0;
    m[0] = 1;
    int sum = 0;
    for(int i=0;i<A.size();i++){
        sum ^= A[i];
        ans += m[sum^B];
        m[sum]++;
    }
    return ans;
}

int main() { 
	/*
	Subarray with given XOR: https://www.interviewbit.com/problems/subarray-with-given-xor/
	Problem Description:
		Given an array of integers A and an integer B.
		Find the total number of subarrays having bitwise XOR of all elements equals to B.
	Input 1:
		A = [4, 2, 2, 6, 4]
		B = 6
	Explanation 1:
		The subarrays having XOR of their elements as 6 are:
		[4, 2], [4, 2, 2, 6, 4], [2, 2, 6], [6]	
	*/
	Solution* s1 = new Solution();
	vector<int> nums = {4, 2, 2, 6, 4};
	int B = 6;
	cout<<s1->solve(nums,B);
	return 0;
}
