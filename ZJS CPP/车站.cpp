#include<iostream>
using namespace std;
int main(){

    int a,n,m,x,b;
    cin>>a>>n>>m>>x;
   /* a b a+b a+2b 2a+3b 3a+5b 5a+8b
	  0 b b   a+b  a+2b  2a+3b 3a+5b
	  a a 2a  2a+b 3a+2b 4a+4b 6a+7b
	  m=w[n-1]*a+u[n-1]*b
	*/
	int w[n+1],u[n+1];
	w[1]=1,w[2]=1,w[3]=2;
	u[1]=0,u[2]=0,u[3]=0;
	for(int i=4;i<=n;i++)
	{
		w[i]=w[i-1]+w[i-2]-1;
		u[i]=u[i-1]+u[i-2]+1;
	}
	b=(m-a*w[n-1])/u[n-1];
	if(x==n)
	{
		cout<<0;
		return 0;
	}
	cout<<a*w[x]+b*u[x];
} 
