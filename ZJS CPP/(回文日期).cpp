#include <iostream>
using namespace std;

int main()
{
	int i,j,date1,date2,year,sum;
	int day_of_month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};		
	int count = 0;
	 
	cin >> date1 >> date2;
    for (i=1;i<=12;i++)//????? 
        for (j=1;j<=day_of_month[i];j++)
        {
            year=i/10+i%10*10+j/10*100+j%10*1000; 
            sum=year*10000+i*100+j;
            if (sum>=date1 and sum<=date2) 
            count++;//?? 
        }
    cout << count << endl;
	return 0;
}

