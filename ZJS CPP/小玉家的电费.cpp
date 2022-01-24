#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
	
	double a;
	double b;
    cin>>a;
    if(a>=0 && a<=150)
	{
		b=a*0.4463;
	}
	else if(a>150)
	{
		if(a>400)
		{
		    b=183.52+(a-400)*0.5663;
		}
		else b=66.945+(a-150)*0.4663;
	} 
    cout<<fixed<<setprecision(1)<<b<<endl;
    return 0;
} 

