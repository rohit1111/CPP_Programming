#include <iostream> 
#include <limits>
#include <string>
#include <sstream>

using namespace std;

int main() {
	// write your code here
  /*
  sample input test case 1:
  C
  98 25.5
  true
  99.17          hello world
  */
	char inputChar;
	int inputInt;
	float inputFloat;
	bool inputBool;
	double inputDouble;
	char inputString[50];
	string inputString1;

	cin>>inputChar;
	cin>>inputInt;
	cin>>inputFloat;
	//cin>>inputBool;
	cin>>boolalpha>>inputBool;
	cin>>inputDouble;	
	//cin>>inputString;
	//cin.ignore();
	//cin.ignore(numeric_limits<streamsize>::max(), ' ');
	//cin.getline(inputString,50);
	//cin>>inputString1;
	//cin.ignore();
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin,inputString1);
	istringstream onlyIss(inputString1);
	string onlyString;
	getline(onlyIss>>ws,onlyString);




	cout<<inputChar<<endl;
	cout<<inputInt<<endl;
	cout<<inputFloat<<endl;
	cout<<boolalpha<<inputBool<<endl;
	cout<<inputDouble<<endl;
	//cout<<inputString<<endl;
	cout<<inputString1<<endl;
	cout<<onlyString<<endl;

	return 0;
}
