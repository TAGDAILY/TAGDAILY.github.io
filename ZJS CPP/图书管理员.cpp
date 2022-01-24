#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	
	int n,q;
	cin>>n>>q;
	int i=1;
	int a[n+1];
	while(i<=n)
	{
		cin>>a[i];
		i++;
	}
	sort(a+1,a+n+1);
	int u=1;
	int b[q];
	int c[q];
	while(u<=q)
	{
	    cin>>b[u];
	    cin>>c[u];
	    u++;
	}
	int d=1;
	int e=1;
	while(d<=q)
	{
		while(e<=n)
		{
			int f=pow(10,b[d]);
		    if(c[d]==a[e]%f)
		    {
			    cout<<a[e]<<endl;
			    break;
		    }
		    e++;	
	    }
		if(e==n+1)
	    {
		    cout<<-1<<endl;
	    }   
	    e=1;
		d++;	
	}
	
} 
