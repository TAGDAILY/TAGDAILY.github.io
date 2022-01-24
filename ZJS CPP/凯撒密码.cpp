#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	
	char a[255];
	cin.get(a,255);
	char b[255];
	int t;
	cin>>t;
	while(t<0)
	{
		t=t+26;
	}
	while(t>26)
	{
	    t=t-26;
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=32)
		{
			b[i]=a[i]+t;
		    while(b[i]>90)
			{
			    b[i]=b[i]-26;
			}
			
		}
		else b[i]=a[i];
	}
	cout<<b;
}
