#include<iostream>
using namespace std;

int jc(int n)
{
	if(n==1) return 1;
	return n*jc(n-1);
}

int main(){
	
	int a;
	cin>>a;
	cout<<jc(a);
}
