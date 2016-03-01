#include <iostream>

using namespace std;

void algorithm (int);

int main(){
	int n;
	cout<<"input n "<<endl;
	cin>>n;
	algorithm(n);
	
	return 0;
}

void algorithm(int number){
	cout<<number;
	while(number!=1){
	if((number%2)==1)
		number=3*number+1;
		else number=number/2;
	cout<<number<<" ";
	}	
}