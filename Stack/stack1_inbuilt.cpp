#include <iostream>
#include <stack> 
using namespace std;

int main() {
	stack<int> s1;
	//push ---> To add elements in stack
	s1.push(1);
	s1.push(3);
	s1.push(2);

	//assign new empty stack;
	//s1 = stack<int>();
	
	//while loop to print the total elements from stack - reverse order of insertion.
	//size ---> To get total elements from stack
	while(s1.size() > 0){
		//top ---> To get topmost elements from stack
		cout<<s1.top()<<endl;
		//pop ---> To remove element in stack
		s1.pop();
	}
	return 0;
}
