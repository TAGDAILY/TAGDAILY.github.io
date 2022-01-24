#include<iostream>
using namespace std;
int main(){
	
	int K;
	cin>>K;
	int m=0;//m！！amout
	int a=1;//a！！day 
	int b;//b！！coin 
	int s=0;//s！！K 
	while(a<=K)
	{
		for(b=1;b<=a;b++)
		{
			m=m+a;
			s++;
			if(s==K)
			{
				cout<<m;
				return 0;
			}
		}
		a++;
	}
	
}
