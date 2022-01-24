#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	cin>>a>>b>>c;
	int d[200];
	int e[200];
	for(int i=1;i<=b;i++)
	{
		cin>>d[i-1];
	}
	int f;
	f=b;
	int g=0; 
	while(f<=a-1)
	{
		if(g>=b)
		{
			g=0;
		}
		d[f]=d[g];
		f++;
		g++;
	}
	for(int u=1;u<=c;u++)
	{
		cin>>e[u-1];
	}
	int h;
	h=c;
	int n=0;
	while(h<=a-1)
	{
		if(n>=c)
		{
			n=0;
		}
		e[h]=e[n];
		h++;
		n++;
	}
	int r=0;
	int t=0;
	for(int p=1;p<=a;p++)
	{
		if(d[p-1]==0)
		{
			if(e[p-1]==2 || e[p-1]==3)
			{
				r++;
			}
			else if(e[p-1]==1 || e[p-1]==4)
			{
				t++;
			}
		}
		else if(d[p-1]==1)
		{
			if(e[p-1]==0 || e[p-1]==3)
			{
				r++;
			}
			else if(e[p-1]==2 || e[p-1]==4)
			{
				t++;
			}
		}
		else if(d[p-1]==2)
		{
			if(e[p-1]==1 || e[p-1]==4)
			{
				r++;
			}
			else if(e[p-1]==0 || e[p-1]==3)
			{
				t++;
			}
		}
		else if(d[p-1]==3)
		{
			if(e[p-1]==2 || e[p-1]==4)
			{
				r++;
			}
			else if(e[p-1]==0 || e[p-1]==1)
			{
				t++;
			}
		}
		else if(d[p-1]==4)
		{
			if(e[p-1]==0 || e[p-1]==1)
			{
				r++;
			}
			else if(e[p-1]==2 || e[p-1]==3)
			{
				t++;
			}
		}
	}
	cout<<r<<" "<<t;
}
