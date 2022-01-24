#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	char a[32];
	gets(a);
	int b=strlen(a);
	if(strcmp(&a[b-3],"ing")==0)
	{
		a[b-3]='\0';
		cout<<a;
	}
	else if(strcmp(&a[b-2],"er")==0 or strcmp(&a[b-2],"ly")==0)
	{
		a[b-2]='\0';
		cout<<a;
	}
	else cout<<a;
}
