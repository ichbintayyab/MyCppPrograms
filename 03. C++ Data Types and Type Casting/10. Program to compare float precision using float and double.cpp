#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float f = 1.123456789f;
	double d = 1.123456789012345;
	
	cout<<fixed<<setprecision(9);
	cout<<"Float value: "<<f<<endl;
	
	cout<<setprecision(15);
	cout<<"Double value: "<<d<<endl;
	
	return 0;
}
