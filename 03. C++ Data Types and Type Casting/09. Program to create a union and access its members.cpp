#include <iostream>
using namespace std;

// Define a union
union data{
	int intVal;
	float floatVal;
};

int main(){
	data d;
	
	d.intVal = 10;
	cout<<"Integer Value: "<<d.intVal<<endl;
	
	d.floatVal = 3.14;
	cout<<"Float Value: "<<d.floatVal<<endl;
	
	// Note: Only the last assigned member holds the valid value
	
	return 0;
}
