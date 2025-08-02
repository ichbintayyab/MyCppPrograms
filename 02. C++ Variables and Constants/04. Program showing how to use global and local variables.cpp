#include <iostream>
using namespace std;

// Global variable
int number = 100;

void showNumber(){
	// Local variable
	int number = 50;
	cout<<"Local number: "<<number<<endl;
}

int main(){
	showNumber();
	cout<<"Global number: "<<number<<endl;
	
	return 0;
}

