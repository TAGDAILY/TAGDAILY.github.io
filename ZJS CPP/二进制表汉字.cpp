#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int C=2;
	int c=1;
	int T=2;
	int t=1;
	while(T<3500){
		t++;
		T=2*T;
	}
	while(C<70000){
		c++;
		C=C*2;
	}
	cout<<"���ú���"<<t<<endl;
	cout<<"���к���"<<c<<endl; 
} 
