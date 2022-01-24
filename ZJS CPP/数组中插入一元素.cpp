#include <iostream>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i-1];
	} 
	int x;
	cin>>x;
	int q=a[n-1];
	int k=1;
	while(k<=n-x)
	{
		a[n-k]=a[n-k-1];
		k++;
	}
	a[x-1]=q;
	for(int r=0;r<n;r++)
	{
		cout<<a[r]<<" ";
	}
} 


