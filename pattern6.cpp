#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	
/*	for(int i=0;i<=num;i++){						
		for(int j=2*num-2*i-1;j>0;j--){	*/	  
	for (int i = num; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

/*



