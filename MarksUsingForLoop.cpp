#include<iostream>
using namespace std;
int main(){
	int n;
	float avg;
	int mark1, mark2, mark3, mark4, mark5;
	cout<<"Enter number of subjects : "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>mark1>>mark2>>mark3>>mark4>>mark5;
	}
	int sum = mark1+mark2+mark3+mark4+mark5;
	avg = (float)sum/n;
	cout<<avg<<endl;

	return 0;
}
