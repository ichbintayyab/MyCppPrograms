#include <iostream>
using namespace std;

int main(){
	int age = 25;
	bool hasID = true;
	
	// Logical operations 
	if (age >= 18 && hasID){
		cout<<"Access granted."<<endl;
	}
	else{
		cout<<"Access denied."<<endl;
	}
	
	if (age < 18 || !hasID){
		cout<<"Check failed."<<endl;
	}
	else{
		cout<<"Check passed."<<endl;
	}
	
	return 0;
}
