#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	char a[1000];
	gets(a);
	int b=strlen(a);
	int c=0;
	for(int i=0;i<=b-1;i++)
	{
		if(i>0 && a[i]!=a[i-1])
		{
			cout<<c<<a[i-1];
			c=0;
		}
		c++;
		if(i==b-1)
		{
			cout<<c<<a[i];
		}
	}
}
