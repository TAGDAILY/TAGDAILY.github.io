#include <iostream>
using namespace std;
int a[10];  //a[0]��a[9]�ֱ��¼������0������9���ֵĴ��� 
int i;
int calCiShu(int b, int num ) //����b������num��������˶��ٴ�, e.g. b=2, num=425
{
	int j=0;
    do{
    	if(num%10==b)
    	{
    		j++;
		}
		num=num/10;
	}while(num>0);
	return j;
}

int main()
{
	int n;
	int x;
	cin >> n;
	cin >> x;
	int result=0;
	int cishu;
    
	
	for (i=1;i<=n;i++)
	{
        cishu=calCiShu(x,i);
        result+=cishu;
	}
	cout << result << endl;
} 


