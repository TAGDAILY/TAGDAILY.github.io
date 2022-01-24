#include<iostream>
#include<algorithm>
using namespace std;


int gcd(int x,int y)//判断x和y是否是互质的
{
	//辗转相除法
	int min;
	if(x<=y)
	{
		min=x;
	}
	else min=y;
	int q=min;
	while(q>=1)
	{
		if(x%q==0 && y%q==0)
		{
			return q; 
		}
		q--;
	}
}

int main(){
	
	int a,b,l;
	cin>>a>>b>>l;
	int i=1;
	int c=1;
	int la=1,st=0;
	
	while(i<=l)
	{
		while(c<=l)
		{
			if(i*b<c*a)
			{
				c++;
				continue;
			}
			if (gcd(i,c)==1)
			{
			    if(la*c>st*i)
			    {
			    	la=i;
			    	st=c;
				}
			}
            c++;
		}
		i++;
		c=1;
	}
	cout<<la<<" "<<st;
}
