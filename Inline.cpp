#include<iostream>
using namespace std;
inline int add(int a, int b){
	return a + b;
}
int main(){
	int a;
	cout<<"Enter a :"<<endl;
	cin>>a;
	int b;
	cout<<"Enter b : "<<endl;
	cin>>b;
	int c = add(a,b);
	cout<<c<<endl;
}
