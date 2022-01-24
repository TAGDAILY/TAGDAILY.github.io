#include<iostream>
#include<string>
using namespace std;
int main(){
	
	string s,a,b;
	getline(cin,s);
	getline(cin,a);
	getline(cin,b);
	int c=a.size();
	int d=0;
	while(s.find(a,d)!=string::npos)
	{
		cout<<s.find(a,d)<<endl;
		d=s.find(a,d)+c;
	}
	return 0;
}
