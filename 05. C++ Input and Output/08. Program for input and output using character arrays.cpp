#include <iostream>
using namespace std;

int main(){
	char name[50];
	
	// Taking input using character array
	cout<<"Enter Your name: ";
	cin.getline(name, 50); // Read a line of characters
	
	// Displaying output
	cout<<"Hello, "<<name<<"!"<<endl;
	
	return 0;
}
