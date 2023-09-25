#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	int i = 1,sum=0;
	while(i<=num){
		sum = sum + i;
		i++;
	}
	cout<<sum<<endl;
}
