#include<iostream>
#include<iomanip> 
using namespace std; 
int main()
{

    char a;
    bool c;
    cin>>a;
    int b;
    cin>>b;
    a=='V'?(b>1000?c=true:c=false):(b>500?c=true:c=false);
    c==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
	double d;
	a=='V'?(b<=500?d=b*0.85:(b>1000?d=b*0.75:d=b*0.8)):d=b*0.9;
	cout<<fixed<<setprecision(2)<<d<<endl;
} 
