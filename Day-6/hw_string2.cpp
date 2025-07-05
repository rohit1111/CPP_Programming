#include <iostream> 
using namespace std;

int main() {
	//HW: Copy one string to another.

	string str = "Rohit Jagtap";
	string str2 = str;
	cout<<"String 1 Assign: "<<str<<endl;
	cout<<"String 2 Copy String 1: "<<str2<<endl;


	string str3(str);
	cout<<"String 3 copy String 1: "<<str3<<endl;

	string str4(str.begin(),str.end());
	cout<<"String 4 copy String 1: "<<str4<<endl;
	cout<<"String 4 size: "<<str4.size()<<endl;
	cout<<"String 4 max size : "<<str4.max_size()<<endl;
	cout<<"String 4 capacity : "<<str4.capacity()<<endl;
	cout<<"String 4 back : "<<str4.back()<<endl;
	cout<<"String 4 front : "<<str4.front()<<endl;

	char str5[str3.size()];
	size_t length = str3.copy(str5, str3.size(), 0);  //copy(char array, length, position)
	str5[length] = '\0';
	cout<<"Char array 5 copy String 3: "<<str5<<endl;

	//HW: Concatenate string
	string str6 = "Welcome to ";
	string str7	= "C++ World";
	string str8 = str6 + str7;
	cout<<"Concatenate String 8 = String 6 + String 7 = "<< str8 <<endl;

	//HW: Compare string
	string str9 = "Rohit";
	if(str.compare(str9) != 0)
		cout<<str << " is not "<<str9 <<endl;
	if(str.compare(0, 5, str9) == 0)
		cout<<str.substr(0,5) << " is "<<str9 <<endl;

	//HW: totale alphabets, digits and special char in string
	string str10 = "Rohit Jagtap 1234 @#$%1 34^^";
	//alphabets: 65 to 90  = A to Z
	//alphabets: 97 to 122 = a to z
	//digits: 48 to 57 = 0 to 9
	int alphabets = 0;
	int digits = 0;
	int spCharacters = 0;
	for(int i =0; i<str10.size();i++){
		if((str10[i] >= 65 && str10[i] <=90 )|| (str10[i] >= 97 && str10[i] <=122))
			alphabets++;
		else if(str10[i]>=48 && str10[i] <=57)
			digits++;
		else
			spCharacters++;
	}
	cout<<str10<<", have alphabets= "<<alphabets<<", digits= "<<digits<<", special characters="<<spCharacters<<endl;

	//HW: total vowels and conconets string
	string str11 = "Rohit Jagtap";
	//vowels: a(97), e(101), i(105), o(111), u(117) , A(65), E(69), I(73), O(79), U(85)
	int vowels = 0;
	int consonents = 0;

	for(int i =0; i<str11.size();i++){
		if(str11[i] == 97 || str11[i] == 101 || str11[i] == 105 || str11[i] == 111 || str11[i] == 117 || str11[i] == 65 || str11[i] == 69 || str11[i] == 73 || str11[i] == 85 )
			vowels++;
		else	
			consonents++;
	}

	cout<<str11<<", have Vowels: "<<vowels<<", consonents: "<<consonents<<endl;

	
	return 0;
}
