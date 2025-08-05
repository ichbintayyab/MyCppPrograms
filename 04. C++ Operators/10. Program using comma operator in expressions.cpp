#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	// Using comma operator
	a = (b = 3, b + 2); // b is set to 3, then a = b + 2
	
	cout<<"Value of b: "<<b<<endl;
	cout<<"Value of a: "<<a<<endl;
	
	return 0;
}
