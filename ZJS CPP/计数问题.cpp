#include <iostream>
using namespace std;
int a[10];  //a[0]到a[9]分别记录了数字0到数字9出现的次数 
int i;
int calCiShu(int b, int num ) //数字b在数字num里面出现了多少次, e.g. b=2, num=425
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


