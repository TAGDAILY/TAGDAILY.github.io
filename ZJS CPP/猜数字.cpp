#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	
	cout<<"请勿输入除数字以外的字符或字母"<<endl;
	int  a_certain_number;
	srand((int)time(0));
	int  target = rand()%100 + 1;
	cin>>a_certain_number;
	while(a_certain_number<1 or a_certain_number>100)
	{
		cout<<"请输入一个1~100之间的自然数"<<endl;
		cin>>a_certain_number; 
	}
	while(a_certain_number<target or a_certain_number>target){
		if(a_certain_number<target){
			cout<<"你猜小了"<<endl; 
		}
		else cout<<"你猜大了"<<endl;
		cin>>a_certain_number;
	}
	cout<<"你猜中了！"<<endl; 
}
