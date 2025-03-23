// C++ Program to Check Whether a Given Number is Even or Odd
#include <iostream>
using namespace std;

int main (){
	int number, remainder;
	cout<<"Enter the number: ";
	cin>>number;
	remainder = number % 2;
	if(remainder==0){
		cout<<number<<" is an even integer."<<endl;
	}
	else{
		cout<<number<<" is an odd integer."<<endl;
	}
	return 0;
}
