#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int u=0;u<=n-1;u++)
	{
		cin>>a[u];
	}
	for(int i=n-1;i>=1;i--)
	{	
		for(int j=0;j<i;j++) 
		{
			if (a[j]<a[j+1])
			swap(a[j],a[j+1]);
		}
	}
	for(int y=0;y<=n-1;y++)
	{
		cout<<a[y]<<" ";
	}
}





