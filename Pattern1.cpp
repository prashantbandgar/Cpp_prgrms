#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	for(int i=0;i<num;i++){            	//for(int i=0;i<num;i++){
		for(int j=0;j<i;j++){			//for(int j=i;j>1;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}

/*
*
* *
* * *
* * * *
*/
