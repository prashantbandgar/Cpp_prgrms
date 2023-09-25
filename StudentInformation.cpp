#include<iostream>
using namespace std;

class Student{
	char name[50];
	int rollno;
	int dob;
	int marks;
	
	public:
		void displayData(){
			cout<<"name is : "<<name<<endl;
		    cout<<"Roll no is : "<<rollno<<endl;
			cout<<"Dob is : "<<dob<<endl;
			cout<<"Marks is : "<<marks<<endl;
		}
		
		void getData(){
			cout<<"Enter name : "<<endl;
			cin>>name;
			cout<<"Enter roll no : "<<endl;
			cin>>rollno;
			cout<<"Enter dob : "<<endl;
			cin>>dob;
			cout<<"Enter marks : "<<endl;
			cin>>marks;
		}
};
int main(){
	
	Student S[10];
	
	int n,i;
	cout<<"Enter number of Students"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		S[i].getData();
		S[i].displayData();
	}
	
	
}
