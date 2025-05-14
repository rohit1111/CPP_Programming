#include <iostream>
using namespace std;

int main(){

	//Learn: Conditional statements
	//if
	//else
	//else if

	int marks;
	cin>>marks;

	//if(expression){
	// executes only if the expression is true otherwise
	// skipped
	//}
	//2- comparision needed.
	/*
	if(marks >= 33){
		cout<<"Passed"<<endl;
	}

	if(marks < 33){
		cout<<"Failed"<<endl;
	}*/
	//In above case: two condition needed to check pass or fail, instead use if else
	//if else
	//if(expression){
	// executes only if the expression is true otherwise skipped
	//}else{
	// executes only if the expression is false otherwise skipped
	//}
	//one - comparision needed.
	if(marks >= 33){
		cout<<"Passed"<<endl;
	}else{
		cout<<"Failed"<<endl;
	}
	//if else if ladder
	if(marks > 90)
		cout<<"A"<<endl;
	else if(marks > 80)
		cout<<"B"<<endl;
	else if(marks > 70)
		cout<<"C"<<endl;
	else if(marks > 60)
		cout<<"D"<<endl;
	else if(marks > 50)
		cout<<"E"<<endl;
	else if(marks > 40)
		cout<<"F"<<endl;
	else if(marks > 33)
		cout<<"G"<<endl;
	else	
		cout<<"Fail"<<endl;

	cout<<"End of the program"<<endl;
	return 0;
}
