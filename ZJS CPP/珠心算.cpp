#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	int q=n*(n-1)/2;
	int b[q];
	int y=0;
	int u=1;
	for(int k=0;k<=n-2;k++)
	{
		while(u<=n-1)
		{
			b[y]=a[k]+a[u];
			y++;
			u++;
		}
		u=k+2;
	}
	int g=0;
	int r=0;
	for(int l=0;l<=n-1;l++)
	{
		for(int r=0;r<=q-1;r++)
		{
			if(a[l]==b[r])
			{
				g++;
				break;
			}
		}
	}
	cout<<g;
}
