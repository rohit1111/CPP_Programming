#include <iostream> 
using namespace std;

int main() {
	// write your code here
	string str = "I love programming. I love Codeforwin.";
	char target;
	cin>>target;
	int fincCount = 0;
	for(int i=0;i<str.size();i++){
		if(str[i] == target){
			if(fincCount == 0)
				cout<<i;
			else
				cout<<", "<<i;
			fincCount++;
			}
	}
	return 0;
}
