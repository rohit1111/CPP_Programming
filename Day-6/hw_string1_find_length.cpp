#include <iostream> 
using namespace std;

int main() {
	//HW: Find a length of string.

	string str = "Rohit Jagtap";
	cout<<str.size()<<endl;
	cout<<str.length()<<endl;
	
	int i = 0;
	int count =0;
	while(str[i] != '\0'){
		count++;
		i++;
	}
	cout<<count<<endl;


	return 0;
}
