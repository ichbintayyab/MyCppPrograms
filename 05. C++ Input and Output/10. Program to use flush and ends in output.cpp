#include <iostream>
using namespace std;

int main(){
	cout<<"Hello, this is a message with flush."<<flush;
	cout<<"<- This part may come instantly without newline."<<endl;
	
	cout<<"This is a line using ends."<<ends;
	cout<<" <- 'ends' add null character (not visible)"<<endl;
	
	return 0;
}
