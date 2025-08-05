#include <iostream>
using namespace std;

int main(){
	int age;
	string name;
	
	// Taking integer input
	cout<<"Enter your age: ";
	cin>>age;
	
	// Clearing the input buffer before getline
	cin.ignore();
	
	// Now read a full line
	cout<<"Enter your full name: ";
	getline(cin, name);
	
	cout<<"Age: "<<age<<", Name: "<<name<<endl;
	
	return 0;
}
