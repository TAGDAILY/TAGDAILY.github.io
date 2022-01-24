#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int x,n;
	int i=1;
	int a=0;
	cin>>x>>n;
	while(i<=n)
	{
		if(x%7!=6 and x%7!=0)
		{
			a=a+250;
		}
	    i++;
	    x++;
	}
	cout<<a;
} 
