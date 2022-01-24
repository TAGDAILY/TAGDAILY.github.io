#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int n;
	int i=0;
	int a[10001],b[10001],c[10001],d[10001];
	int x,y;
	int r; 
	cin>>n;
	while(i!=n)
	{
		i++;
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		r=i;
	}
	cin>>x>>y;
	while(a[i]>x || x>a[i]+c[i] || b[i]>y || y>b[i]+d[i])
	{
		i--;
		r=i;
	}
	if(r==0)
	{
		r--;
		cout<<r;
	}
	else cout<<r;	
} 
