
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	
	cout<<"21�����߶Ĳ�ϵͳ��Ҫ����������ĸy��Y����Ҫ��������ĸn��N��"<<endl; 
	srand((int)time(0));
	int a;
	int i=0;
	float b=0;
	char go;
	do{	
	    //��һ����
	    a=rand()%13+1;
	    
	    if(a<=10)
	    {
	    	cout << "��һ�ε����ǣ�"<< a << endl;
		}
		else if(a==11)
		{
			cout << "��һ�ε����ǣ�J"<< endl;
		}
		else if(a==12)
		{
			cout << "��һ�ε����ǣ�Q"<< endl;
		}
		else cout << "��һ�ε����ǣ�K"<< endl;
		i++;
		cout <<"�����ڵ��������ǣ�"<< i << endl; 
	    b+= (a<=10?a:0.5);
	    cout<<"�����ڵ��ܷ��ǣ�"<<b<<endl;
	    if (b>=21)
	    {
	    	break;
		}
		if (i==8)
		{
			cout <<"��ϲ���������"<<endl;
			return 0; 
		}
	    cout<<"�㻹����Ҫ����"<< endl;
	    cin>>go;
	}while(go=='Y' or go=='y');
	cout<<"�����յĵ÷��ǣ�"<<b<<endl;
	if(b<21)
	{
		cout<<"��鿴�÷֡�"<<endl; 
	}
	else if(b==21)
	{
		cout<<"��ϲ����21�㣡"<<endl; 
	}
	else cout<<"���ź�......"<<endl;
}
