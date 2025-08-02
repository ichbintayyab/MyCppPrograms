#include <iostream>
using namespace std;

int main(){
	const float PI = 3.14159; // const value cannot be changed
	float radius = 5.0;
	
	float area = PI * radius * radius;
	
	cout<<"Area of circle: "<<area<<endl;
	
	return 0;
}
