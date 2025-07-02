// C++ Program to Reverse a Number using Function

#include <iostream>
using namespace std;

int reverseNumber(int num){
	int rev = 0;
	while (num!=0){
		int r = num % 10;
		rev = rev * 10 + r;
		num /= 10;
	}
	return rev;
}

int main (){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	int reverseNum = reverseNumber(num);
	cout<<"The reverse of "<<num<<" is: "<<reverseNum<<endl;
	return 0;
}
