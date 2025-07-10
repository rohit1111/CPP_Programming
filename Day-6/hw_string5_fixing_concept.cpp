#include <iostream>
#include <vector>

using namespace std;

bool match(string str1, string target, int startIndex){
	int i = startIndex;
	int j = 0;
	while(i < str1.size() && j < target.size()){
		if(str1[i] != target[j])
			return false;
		i++;
		j++;
	}
	return true;
}

int main() {
	string str1 = "I love programming, I love codingoooo.";
	string target = "love";
	
	//HW: FInd the target string in given string and return its location.
	for(int i=0;i<str1.size();i++){
		char currentChar = str1[i];

		if(match(str1, target, i) == true)
			cout<<i<<" ";
	}	
	
	//HW: Find maximum time occured char in string.
	char maxChar = ' ';
	int maxCount = 0;
	for(int i=0;i<str1.size();i++){
		char currentChar = str1[i];
		int currentCount = 0;
		for(int j =0;j<str1.size();j++){
			if(str1[j] == currentChar){
				currentCount++; 
			}
		}
		if(currentCount > maxCount){
			maxChar = currentChar;
			maxCount = currentCount;
		}
	}

	cout<<maxChar <<" " << maxCount <<endl;



	//HW: reverse words of string

	// I love programming I love coding
	// coding love I programming love I

	vector<string> reverseString;
	string ans = "";
	for(int i=0;i<str1.size();i++){
		if(str1[i] != ' ')
			ans += str1[i];
		else{
			reverseString.push_back(ans);
			ans = "";
		}
	}
	reverseString.push_back(ans);

	for(int i=0;i<reverseString.size();i++){
		cout << reverseString[i] <<" ";
	}

	//reverse
	int i = 0;
	int j = reverseString.size()-1;

	while(i<j){
		string temp = reverseString[i];
		reverseString[i] = reverseString[j];
		reverseString[j] = temp;
		i++;
		j--;
	}
	cout<<endl;
	for(int i=0;i<reverseString.size();i++){
		cout << reverseString[i] <<" ";
	}
	return 0;
}
