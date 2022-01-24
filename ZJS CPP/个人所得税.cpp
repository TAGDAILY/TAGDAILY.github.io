#include<iostream>
using namespace std;
int main(){
	
	int a=0;
	while(a>=0)
	{
	    cin>>a;
	    if(a>=0 && a<=5000)
		{
			cout<<0;
		}
		else if(a>5000)
		{
			if(a>15000)
			{
				if(a>35000)
				{
					cout<<a*0.2;
				}
				else cout<<a*0.15;
			}
			else cout<<a*0.1;
		} 
    }
    return 0;
} 
