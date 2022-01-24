#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	char a[100000];
	gets(a);
	int b=strlen(a);
	for(int i=1;i<=b;i++)
	{
		for(int k=0;k<=b-1;k++)
		{
			if(i==b && k==b-1)
			{
				cout<<a[i-1];
				return 0;
			}
			if(i-1==k)
			{
				continue;
			}
	    	if(a[i-1]==a[k])
			{
				break;
			}
			if(k==b-1)
			{
				cout<<a[i-1];
				return 0;
			}
		}
		if(i==b)
		{
			cout<<"no";
		}
	} 
}
