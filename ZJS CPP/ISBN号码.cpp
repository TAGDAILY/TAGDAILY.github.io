#include<iostream>
using namespace std;


int main(){
	
	char a[12];
	for(int i=0;i<=12;i++)
	{
		cin>>a[i];
	}
	int d=0;
	int k=1;
	for(int b=0;b<=11;b++)
	{
		if(a[b]!='-')
		{
            d= d+ (a[b] - '0')*k ;    //e.g. '7'-'0'=7; '9'-'0'=9
	     	k=k+1;
		}
		//d=d+a[b]*(b+1-e);
	}
	
	int check; //check is 用户输入的isbn号码的最后一位
	if (a[12]!='X')
	    check = a[12]-'0';
	else
	    check =10;  
		
	if (d%11==check)
	    cout << "Right";
	else
	{
		for(int i=0;i<=11;i++)
	    {
		    cout<<a[i];
	    }
	    if(d%11!=10) 
		cout << d%11;
	    else
	    cout<<"X";
    }		 	 
	
/*
	if(d%11==10)
	{
		if(a[12]=='X')
		{
			cout<<"Right";
		}
		else 
		{
		    for(int i=0;i<=11;i++)
		    {
			    cout<<a[i];
		    }
		    cout<<"X"; 
	    }
	    return 0;
 	}
 	if(a[12]=='X')
 	{
 		for(int i=0;i<=11;i++)
	    {
		    cout<<a[i];
	    }
 		cout<<d%11;
 		return 0;
	}
	char sbm=a[12];
 	if(sbm==d%11)
 	{
 		cout<<"Right";
	}
	else
	{
		for(int i=0;i<=11;i++)
	    {
		    cout<<a[i];
	    }
		cout<<d%11;
	}
	*/
}
