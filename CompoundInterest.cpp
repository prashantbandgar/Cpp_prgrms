#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int principal, year;
	double interest;
	cout<<"Enter Principal"<<endl;
	cin>>principal;
	cout<<"Enter interest"<<endl;
	cin>>interest;
	cout<<"Enter Year"<<endl;
	cin>>year;
	int Amount =principal*(pow(1+interest/100,year));
	int compoundinterest = Amount - principal;
	cout<<compoundinterest<<endl;
	return 0;
}


