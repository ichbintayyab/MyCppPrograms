#include <iostream>
using namespace std;

int main(){
	int a = 4, b = 3, c = 2;
	
	// Mixed operator expression
	int result = a + b * c - b / c;
	// Expected: 4 + (3 * 2) - (3 / 2) = 4 + 6 - 1 = 9
	
	cout<<"Result: "<<result<<endl;
	
	return 0;
}
