#include <iostream>
using namespace std;
int main(){
	
	short a[13];
	int i=0;
	for (int x=1;x<=12;++x)
	{
		cin>>a[x];
	}
	int y=1;
	int z=0;
	while(y<=12)
	{ 
		i=i+300;
		if(i-a[y]<0)
		{
			cout<<-1*y;
			return 0;
		}
		i=i-a[y];
		while(i>=100)
	{
		i=i-100;
		z++;
	}
	y++;
	}
    cout<<i+z*100*1.2;	
} 
