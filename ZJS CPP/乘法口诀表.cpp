#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	
	int g;
	scanf("%d",&g);
	for(int i=1;i<=g;i++)
	{
		for(int h=1;h<=i;h++)
		{
			printf("%d*%d=%d ",h,g,h*g);
		}
		printf("\n"); `
	}
}
