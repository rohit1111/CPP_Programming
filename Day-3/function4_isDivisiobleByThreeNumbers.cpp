#include <iostream>
using namespace std;

bool isThree(int numbers);

int main(){

	//HW: Number exactly divisibly by three numbers.
	int numbers;
	cin>>numbers;

	bool result = isThree(numbers);
	cout<<"Number: "<<numbers <<", is exactly divisible by 3 numberes: "<<result<<endl;
	return 0;
}

bool isThree(int numbers){
	int count = 0;
	for(int i=1;i<=numbers;i++){
		if( numbers%i == 0)
			count++;
	}

	if(count == 3)
		return true;
	else
		return false;

}
