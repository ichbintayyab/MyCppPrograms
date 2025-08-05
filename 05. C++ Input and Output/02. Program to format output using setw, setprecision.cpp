#include <iostream>
#include <iomanip> // For setw and setprecision
using namespace std;

int main(){
	float value = 123.456789;
	
	// setw is used for setting width of output
	cout<<"Formated Output:"<<endl;
	cout<<setw(10)<<"Value"<<endl;
	cout<<setw(10)<<value<<endl;
	
	// setprecision is used to control decimal places
	cout<<fixed<<setprecision(2);
	cout<<"Value with 2 decimal places: "<<value<<endl;
	
	return 0;
}
