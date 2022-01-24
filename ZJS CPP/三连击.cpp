#include<iostream>
using namespace std;
int main(){
	
	int u,t,k;
	int u1,u2,u3,t1,t2,t3;
	for(int a=1;a<=9;a++)
	{
		for(int b=1;b<=9;b++)
	    {
	    	for(int c=1;c<=9;c++)
	    	{
	    		k=100*a+10*b+c;
			    u=2*(100*a+10*b+c);
			    t=3*(100*a+10*b+c);
			    u1=u%10;
			    u2=(u/10)%10;
			    u3=u/100;
			    t1=t%10;
			    t2=(t/10)%10;
			    t3=t/100;
	    		if(a!=b and a!=c and a!=u1 and a!=u2 and a!=u3 and a!=t1 and a!=t2 and a!=t3 and b!=c and b!=u1 and b!=u2 and b!=u3 and b!=t1 and b!=t2 and b!=t3 and c!=u1 and c!=u2 and c!=u3 and c!=t1 and c!=t2 and c!=t3 and u1!=u2 and u1!=u3 and u1!=t1 and u1!=t2 and u1!=t3 and u2!=u3 and u2!=t1 and u2!=t2 and u2!=t3 and u3!=t1 and u3!=t2 and u3!=t3 and t1!=t2 and t1!=t3  and t2!=t3 and t<=999  and a!=0  and b!=0  and c!=0  and u1!=0  and u2!=0  and u3!=0  and t1!=0  and t2!=0  and t3!=0)
	    		{
	    			cout<<k<<" "<<u<<" "<<t<<endl;
				}
			}
		}
	}
}
