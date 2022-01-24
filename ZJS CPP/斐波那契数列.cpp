#include<iostream>
using namespace std;

int a=0,b=1;
int c;
void output (int n)
{
	for(int i=1;i<=n-2;i++)
	{
		c=a+b;
		b=b+a;
		a=b-a;
	}
	cout<<c<<endl;
}

int main(){
	
	int n1;
	cin>>n1;
	output(n1);
} 
