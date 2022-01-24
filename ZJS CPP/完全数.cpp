#include <iostream>
using namespace std;

int main()
{
	
	int m,n;
	cin>>m>>n;
	int a,i;
	int b=0;
	for(a=m;a<=n;a++)
	{
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				b=b+i;
			}
		}
		if(b==a)
		{
			cout<<a<<endl;
		}
		b=0;
	} 
} 
