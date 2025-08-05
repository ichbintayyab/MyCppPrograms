#include <iostream>
using namespace std;

// Define an enum
enum Day { Monday, Tuesday, Wednesday, Thrusday, Friday, Saturday, Sunday
};

int main(){
	Day today = Wednesday;
	
	cout<<"Enum value for today: "<<today<<endl;
	
	return 0;
}
