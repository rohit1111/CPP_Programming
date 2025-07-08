#include <iostream> 
using namespace std;

int main() {
	// write your code here
	string str = "I love programming. I love Codeforwin.";
	string str2 = "love";
	size_t found = 0;
	while(1){
		found = str.find(str2,found);
		if(found == string::npos)
			break;
		else{
			cout<<"'"<<str2<<"' is found at index: "<< found<<endl;
			found++;
			}
	}
	return 0;
}
