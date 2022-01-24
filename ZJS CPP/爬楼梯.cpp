#include <iostream>
using namespace std;

int times_of_palouti(int n)
{
if n=1 return 1;
else if n=2 return 2;
else return times_of_palouti(n-1)+times_of_palouti(n-2);
} 

int main()
{
	int x;
	while(cin >> x)
	{
		cout << times_of_palouti(x)<< endl;
	}
}

