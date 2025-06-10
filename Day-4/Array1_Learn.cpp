#include <iostream>
using namespace std;

int main(){
	int a = 10;

	int *ptr = &a;

	cout<<a<<endl;
	cout<<&a <<" "<<ptr<<endl;
	cout<<a <<" "<<*ptr<<endl;
	cout<<a <<" "<<ptr[0] <<" "<<ptr[1]<<endl;

	int arr[10] = {10, 20,30,40}; // initilize index 0, 1, 2, 3 and rest initiize to zero.
	//arr[0] = 25;

	int *arrPtr = arr;

	cout<<arrPtr<<" "<<arr<<endl;
	cout<<*arrPtr<<" "<<*arr<<" "<<arr[0]<<endl;
	cout<<arrPtr<<" "<<arr<<" "<<&(arr[0])<<endl;
	cout<<arrPtr[5]<<" "<<arr[5]<<endl;


	char c_arr[10] = {'a','b','\0','d'};
	char *cPtr = c_arr;

	cout<<cPtr<<" "<<c_arr<<endl; // It cases to char*
	cout<<(void *)cPtr<<" "<<(void *)c_arr<<endl;  //if cast to void* then only prints the address in case of char 
	
	return 0;
}
