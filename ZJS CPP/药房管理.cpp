#include <iostream>
using namespace std;
int main(){
	
	int a;
	cin>>a;
	int b;
	cin>>b;
	int x;
	int y=0;
	for(int c=1;c<=b;c++)
	{
		cin>>x;
		if(a>=x)
		{
			a=a-x;
		}
		else y++; 
	} 
	cout<<y;
}
