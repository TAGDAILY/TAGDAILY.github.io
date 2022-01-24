#include<iostream>
#include<cstring>
using namespace std;
char c[10000];
int r;
void reverse(char b[])
{
	r=strlen (b);
	for(int i=1;i<=strlen (b);i++)
	{
		c[i-1]=b[strlen (b)-i];
	}
}

int main(){
	
	char a[10000];
	cin>>a;
	reverse(a);
	cout<<c;
}
