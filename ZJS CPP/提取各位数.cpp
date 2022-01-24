#include<iostream>
using namespace std;
int main(){
	
	int a;
	cin>>a;
	do{
		cout<<a%10<<" ";
		a=a/10;
	}while(a>0);
} 
