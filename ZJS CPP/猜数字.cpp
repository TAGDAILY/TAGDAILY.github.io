#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	
	cout<<"�������������������ַ�����ĸ"<<endl;
	int  a_certain_number;
	srand((int)time(0));
	int  target = rand()%100 + 1;
	cin>>a_certain_number;
	while(a_certain_number<1 or a_certain_number>100)
	{
		cout<<"������һ��1~100֮�����Ȼ��"<<endl;
		cin>>a_certain_number; 
	}
	while(a_certain_number<target or a_certain_number>target){
		if(a_certain_number<target){
			cout<<"���С��"<<endl; 
		}
		else cout<<"��´���"<<endl;
		cin>>a_certain_number;
	}
	cout<<"������ˣ�"<<endl; 
}
