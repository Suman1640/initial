#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"Enter Value of A: ";
	cin>>a;
	cout<<"Enter Value of B: ";
	cin>>b;

	if(a==b){
		cout<<"A = B";
	} else if(a>b){
		cout<<"A>B";
	} else{
		cout<<"A<B";
	}

	return 0;
}
