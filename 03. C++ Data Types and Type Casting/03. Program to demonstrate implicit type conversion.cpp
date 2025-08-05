#include <iostream>
using namespace std;

int main(){
	int num = 10;
	double result;
	
	// Implicit conversion from int to double
	result = num + 5.5;
	
	cout<<"Result (int + double): "<<result<<endl;
	
	return 0;
}
