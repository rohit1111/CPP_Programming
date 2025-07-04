#include <iostream> 
using namespace std;

int main() {
	char string[] = "Rohit";
	cout<<string<<endl;

	int arr[] = {1,2};
	cout<<*(arr+1)<<endl;
	
	std::string str = "rohit jagtap";
	cout<<sizeof(str)<<endl;
	cout<<str.capacity()<<endl;

	std::string str1 = "1234";
	int a = stoi(str1);
	int ans = a * 2;
	std::string str2 = to_string(ans);
	cout<<str2<<endl;

	std::string checkPalindrome = "madamm";
	int size = checkPalindrome.size();
	int i=0;
	int j=size-1;

	while(i<j){
		if(checkPalindrome[i] == checkPalindrome[j]){
			i++;
			j--;
		}
		else{
			cout<<"Not palindrome"<<endl;
			break;
		}
	}
	return 0;
}
