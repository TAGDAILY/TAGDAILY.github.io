#include <iostream>
using namespace std;
int main(){
	
	int A;
	int B=0;
	int the_number=0;
	float avg;
	int max=INT_MIN;
	int min=INT_MAX;
	while(cin>>A){
		if(A>max){
			max=A;
		}
		if(A<min){
			min=A;
		}
	    B=A+B;
	    the_number=the_number+1;
	}
	avg=B/the_number;
	cout<<"��"<<B<<endl;
	cout<<"��ֵ"<<avg<<endl;
	cout<<"���ֵ"<<max<<endl;
	cout<<"��Сֵ"<<min<<endl; 
}
