#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	char a[50];
	gets(a);
	int b=strlen(a);
	for(int i=1;i<=b;i++)
	{
		if(65<=a[i-1] and a[i-1]<=90)
		{
		    a[i-1]=a[i-1]+32;
	    }
	    else if(97<=a[i-1] and a[i-1]<=122)
	    {
		    a[i-1]=a[i-1]-32;
    	}
	}
	cout<<a;
	for(int k=1;k<=b/2;k++)
	{
		swap(a[k-1],a[b-k]);
	}
	cout<<a;
	for(int u=0;u<=b-1;u++)
	{
		a[u]=a[u]+3;
		if(a[u]>90 && a[u]<97) a[u]=a[u]-26;
		else if(a[u]>122) a[u]=a[u]-26;
	}
	cout<<a;
}#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	char a[50];
	gets(a);
	int b=strlen(a);
	for(int i=1;i<=b;i++)
	{
		if(65<=a[i-1] and a[i-1]<=90)
		{
		    a[i-1]=a[i-1]+32;
	    }
	    else if(97<=a[i-1] and a[i-1]<=122)
	    {
		    a[i-1]=a[i-1]-32;
    	}
	}
	cout<<a;
	for(int k=1;k<=b/2;k++)
	{
		swap(a[k-1],a[b-k]);
	}
	cout<<a;
	for(int u=0;u<=b-1;u++)
	{
		a[u]=a[u]+3;
		if(a[u]>90 && a[u]<97) a[u]=a[u]-26;
		else if(a[u]>122) a[u]=a[u]-26;
	}
	cout<<a;
}
