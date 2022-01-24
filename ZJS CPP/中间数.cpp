#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;
    if((a<=b and b<=c)or(c<=b and b<=a))
    {
    	cout<<b;
	}
	else if((b<=a and a<=c)or(c<=a and a<=b))
	{
		cout<<a;
	}
	else cout<<c;
}
