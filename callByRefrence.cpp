#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(int &p,int &q){
	int temp = 0;
	temp=p;
	p=q;
	q=temp;
}
int main(){
	int a,b;
	cout<<"take two numbers : \n"<<endl;
	cin>>a>>b;
	cout<<"before swap : ";
	cout<<a<<b;
	swap(a,b);
	cout<<"after swap : ";
	cout<<a<<b;
}
