#include <iostream>
using namespace std;


int main(){
	char N;
	cin>>N;
	if(65<=N and N<=90){
		cout.put(N+32)<<endl;
	}
	else if(97<=N and N<=112)
	{
		cout.put(N-32)<<endl; 
	}
	else
	{
		cout<<"ÇëÊäÈë×ÖÄ¸"<<endl;
	}
}
