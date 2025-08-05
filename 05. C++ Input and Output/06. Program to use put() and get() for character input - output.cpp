#include <iostream>
using namespace std;

int main(){
	char ch;
	
	// Taking character input using get()
	cout<<"Enter a character: ";
	ch = cin.get();
	
	// Displaying character using put()
	cout<<"You entered: ";
	cout.put(ch);
	cout<<endl;
	
	return 0;
}
