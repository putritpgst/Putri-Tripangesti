#include <iostream>
using namespace std;
	int main(){
	int password;
	
	cout<<"Please enter your password: ";
	cin>>password;
	cout<<"--------------------------------"<<endl;

	if(password == 1234){
	cout<<"Now, you're already log in."<<endl;
	cout<<"WELCOME TO YOUR PAGE!"<<endl;
	}

	else{
	cout<<"Your password is incorrect."<<endl;
	}
	
	return 0;
}
