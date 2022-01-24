#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int a[300],b[300],c[300],d[300],id[300];//语,数,外,总分成绩;个人学号。 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i-1]>>b[i-1]>>c[i-1];
		d[i-1]=a[i-1]+b[i-1]+c[i-1];
		id[i-1]=i;
	}
	int e;
	e=n-1;
	for(int u=1;u<=n-1;u++)
	{
		for(int t=1;t<=e;t++)
		{
			if(d[t-1]<d[t])
			{
				swap(d[t-1],d[t]);
				swap(id[t-1],id[t]);
				swap(a[t-1],a[t]);
			}
			else if(d[t-1]==d[t] && a[t-1]<a[t])
			{
				swap(d[t-1],d[t]);
				swap(id[t-1],id[t]);
				swap(a[t-1],a[t]);
			}
			else if(d[t-1]==d[t] && a[t-1]==a[t] && id[t-1]>id[t])
			{
				swap(d[t-1],d[t]);
				swap(id[t-1],id[t]);
				swap(a[t-1],a[t]);
			}
		} 
		e--;
	}
	for(int o=1;o<=5;o++)
	{
		cout<<id[o-1]<<" "<<d[o-1]<<endl;
	}
}

