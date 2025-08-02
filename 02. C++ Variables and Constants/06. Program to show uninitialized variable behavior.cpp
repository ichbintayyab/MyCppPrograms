#include <iostream>
using namespace std;

int main(){
	int x; // uninitialized variable
	
	// Output may be garbage value
	cout<<"Value of uninitialized varible x: "<<x<<endl;
	return 0;
}
