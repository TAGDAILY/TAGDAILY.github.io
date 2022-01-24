#include <stack>
#include <string>
#include <iostream>
using namespace std;
int main(){
	
	stack<char> s;
	string a;
	string c;
	getline(cin,a);
	int b=a.size();
	for(int i=0;i<=b-1;i++)
	{
		s.push(a[i]);
	}
	for(int k=0;k<=b-1;k++)
	{
		//cout<<s.top()<<endl;
		c=c+s.top();
		//c[k]=s.top();
		//cout << "c[" << k <<"]=" << s.top() << endl;
		s.pop();
	}
	//cout<<"a=" <<a<<endl;
	//c[7]='\0';
	//cout<<"c="<<c<<endl;
	if(a==c) cout<<"yes";
	else cout<<"no";
}
