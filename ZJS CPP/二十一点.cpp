
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	
	cout<<"21点在线赌博系统：要牌请输入字母y或Y，不要请输入字母n或N。"<<endl; 
	srand((int)time(0));
	int a;
	int i=0;
	float b=0;
	char go;
	do{	
	    //发一张牌
	    a=rand()%13+1;
	    
	    if(a<=10)
	    {
	    	cout << "这一次的牌是："<< a << endl;
		}
		else if(a==11)
		{
			cout << "这一次的牌是：J"<< endl;
		}
		else if(a==12)
		{
			cout << "这一次的牌是：Q"<< endl;
		}
		else cout << "这一次的牌是：K"<< endl;
		i++;
		cout <<"你现在的总牌数是："<< i << endl; 
	    b+= (a<=10?a:0.5);
	    cout<<"你现在的总分是："<<b<<endl;
	    if (b>=21)
	    {
	    	break;
		}
		if (i==8)
		{
			cout <<"恭喜你完好无损！"<<endl;
			return 0; 
		}
	    cout<<"你还继续要牌吗？"<< endl;
	    cin>>go;
	}while(go=='Y' or go=='y');
	cout<<"你最终的得分是："<<b<<endl;
	if(b<21)
	{
		cout<<"请查看得分。"<<endl; 
	}
	else if(b==21)
	{
		cout<<"恭喜你达成21点！"<<endl; 
	}
	else cout<<"很遗憾......"<<endl;
}
