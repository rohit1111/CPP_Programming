#include <iostream>
using namespace std;

int main(){
	//HW. Check if the year is leap yaer or not.
	//How to chck:
	//if year is divisible by 4 then leap yaer otherwise not.
	//if year is divisible by 4 and year is divisible by the 100 then also need to check if divisible by 400, if yes then leap otherwise not.
	//if year is divisible by 4 and year is not divisible by 100 then its leap yaer.

  //Nested if else conditions.
	int inputYear;
	cin>>inputYear;

	if(inputYear % 4 == 0)
	{
		if(inputYear%100 == 0)
		{
			if(inputYear%400 == 0)
			{
				cout<<"Leap Year: "<<inputYear<<endl;
			}else{
				cout<<"Not Leap Year: "<<inputYear<<endl;
			}
		}
		else{
			cout<<"Leap Year: "<<inputYear<<endl;
		}
	}
	else{
		cout<<"Not Leap Year: "<<inputYear<<endl;
	}

	return 0;
}
