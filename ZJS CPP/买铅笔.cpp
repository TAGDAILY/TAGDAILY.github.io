#include<iostream>
using namespace std;
int main(){
	
	int i,a,b,c,d,e,f;
	cin>>i>>a>>b>>c>>d>>e>>f;
	int u,k,l;
	if(i%a==0)
	{
		u=i/a;
	}
	else u=i/a+1;
	if(i%c==0)
	{
		k=i/c;
	}
	else k=i/c+1;
	if(i%e==0)
	{
		l=i/e;
	}
	else l=i/e+1;
	int q,w,r;
	q=u*b;
	w=k*d;
	r=l*f;
	if(q<=w && q<=r)
	{
		cout<<q;
	}
	else if(w<=q && w<=r)
	{
		cout<<w;
	}
	else cout<<r;
}
