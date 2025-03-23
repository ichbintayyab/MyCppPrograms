#include <iostream>
#include <string>
using namespace std;

class binary{
	string s;
	void chk_bin();
	public:
		void read();
		
		void ones_compliment();
		void display();
		
};

void binary :: read(){
	cout<<"Enter: "<<endl;
	cin>>s;
}
void binary :: chk_bin(){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0'&&s.at(i)!='1'){
			cout<<"incorrect binary format"<<endl;
			exit (0);
		}
	}
}
void binary :: ones_compliment(){
	chk_bin();
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else {
			s.at(i)='0';
		}
	}
}
void binary :: display(){
	cout<<"Ones Compliment is: ";
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
}
int main (){
	binary b;
	b.read();
//	b.chk_bin();
	b.ones_compliment();
	b.display();
	return 0;
}
