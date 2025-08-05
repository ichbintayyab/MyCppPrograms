#include <iostream>
using namespace std;

int main(){
	int number = 7;
	
	// Ternary operator
	string result = (number % 2 == 0) ? "Even" : "Odd";
	cout<<"Number is: "<<result<<endl;
	return 0;
}
