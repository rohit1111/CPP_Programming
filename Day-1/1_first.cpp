/* 
*  Enable the steps one by one and comment out the stpes ahead by it, to check the errors
*  And how to resolve it, enable the next step and so on.
*/


#include<iostream>									//Step-2
#include<vector>									//Step-6
#include<algorithm>									//Step-8
using namespace std;								//Step-4
int main(){											//Step-1
	//cout << "Hello CPP Programming";				//Step-1 // error: ‘cout’ was not declared in this scope
	//cout << "Hello CPP Programming";				//Step-2 // error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
	//std::cout << "Hello CPP Programming";			//Step-3 // Added the std namespace with the scope resolution operator
	cout << "Hello CPP Programming";				//Step-4 // Added the std namespace globally at line number 2, so not need to use every time.
	//vector<int> v;								//Step-5 // error: ‘vector’ was not declared in this scope
	vector<int> v;									//Step-6
	//sort(v.begin(),v.end());						//Step-7 // error: ‘sort’ was not declared in this scope; did you mean ‘short’?
	sort(v.begin(),v.end());						//Step-8
	return 0;										//Step-1
}													//Step-1
