#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	float avg;
	cout<<"Enter number of subjects"<<endl;
	cin>>n;
	int marks[n];
	for(int i=0;i<n;i++){
		cin>>marks[i];
		sum = sum + i;
	}
	avg = (float)sum/n;
	cout<<avg<<endl;
}
