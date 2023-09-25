#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter the age"<<endl;
	cin>>age;
	if(age>18){
		cout<<"Eligible to vote"<<endl;
	}
	else{
		cout<<"Not Eligible to vote"<<endl;
	}
	return 0;
}
