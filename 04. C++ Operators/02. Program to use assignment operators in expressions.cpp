#include <iostream>
using namespace std;

int main(){
	int x = 5;
	
	// Using assignment operators
	x = x + 2;
	cout<<"x after x = x + 2: "<<x<<endl;
	
	x += 3; // Same as x = x + 2
	cout<<"x after x += 3: "<<x<<endl;
	
	x *= 3; // Same as x = x * 3
	cout<<"x after x *= 3: "<<x<<endl;
	
	return 0;
}
