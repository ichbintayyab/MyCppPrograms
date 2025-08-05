#include <iostream>
using namespace std;

int main(){
	string line;
	
	// Using getline to read full line with spaces
	cout<<"Enter a full line: ";
	getline(cin, line);
	
	cout<<"You entered: "<<line<<endl;
	
	return 0;
}
