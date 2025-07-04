#include <iostream> 
using namespace std;

int main() {
	std:string str;
	cin>>str;

	int size = str.size();
	int st = 0;
	int end = size - 1;

	while(st <= end){
		swap(str[st],str[end]);
		st++;
		end--;
	}

	cout<<str<<endl;
	return 0;
}
