#include <iostream>
using namespace std;

int main(){
	int ID;
	string fullName;
	
	cout<<"Enter your ID: ";
	cin>>ID;
	
	// Clear input buffer before reading string
	cin.ignore();
	cout<<"Enter your full name: ";
	getline(cin, fullName);
	
	cout<<"ID: "<<ID<<", Name: "<<fullName<<endl;
	
	return 0;
}
