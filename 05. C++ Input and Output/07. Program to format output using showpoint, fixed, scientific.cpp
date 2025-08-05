#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float num = 123.0;
	
	cout<<"Without formatting: "<<num<<endl;
	
	// Using showpoint to show decimal point
	cout<<showpoint;
	cout<<"With showpoint: "<<num<<endl;
	
	// Using fixed to show fixed-point notation
	cout<<fixed<<setprecision(2);
	cout<<"With fixed: "<<num<<endl;
	
	// Using scientific format
	cout<<scientific;
	cout<<"With scientific: "<<num<<endl;
	
	return 0;
}
