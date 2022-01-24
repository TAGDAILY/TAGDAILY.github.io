#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	double x;
	int a=1;
	float b=0.98F;
	double c= 2*pow(b,a-1);
	cin>>x;
	while(c<x)
	{
		a++;
		c=c+2*pow(b,a-1);
	}
	cout<<a;
}
