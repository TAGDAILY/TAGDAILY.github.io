#include<iostream>
using namespace std;
int hw(int date)
{
    int a,b,c,d,e,f,g,h;
	h=date%10;
	g=date/10%10;
	f=date/100%10;
	e=date/1000%10;
	d=date/10000%10;
	c=date/100000%10;
	b=date/1000000%10;
	a=date/10000000;
	if(10*e+f>12)
	{
		return 0;
	}
	if(10*e+f==1 || 10*e+f==3 || 10*e+f==5 || 10*e+f==7 || 10*e+f==8 || 10*e+f==10 || 10*e+f==12)
	{
		if(10*g+h>31)
		{
			return 0;
		} 
	}
	else if(10*e+f==4 || 10*e+f==6 || 10*e+f==9 || 10*e+f==11)
	{
		if(10*g+h>30)
		{
			return 0;
		}
	}
	else if(10*g+h>28)
	{
		return 0;
	}
	if(a==h and b==g and c==f and d==e)
    {
		return 1;
	}
	return 0;
}
int main(){
		
	int date1,date2;
	cin>>date1>>date2;
	int u=date1;
	int k=0;
	while(u<=date2)
	{
		if(hw(u)==1)
		{
			k++;
		}
		u++;
	}
	if(date1<=92200229 and 92200229<=date2)
	{
		k++;
	}
	cout<<k;
} 
