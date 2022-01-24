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
	int k=0;
	while(k<=n-x-1)
	{
		a[x+k-1]=a[x+k];
		k++;
	}
	for(int r=0;r<n-1;r++)
	{
		cout<<a[r]<<" ";
	}
}
