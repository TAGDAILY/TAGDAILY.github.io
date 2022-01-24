#include<iostream>
using namespace std;
int main(){
	
	char a;
	int w=0;
	int d=0;
	while((a=cin.get()) !='\n' )
	{
		switch(a)
		{
			case 'A':case 'E':case 'I':case 'O':case 'U':case 'a':case 'e':case 'i':case 'o':case 'u': w++; break;
			case ' ':case ',':case '.': break;
			default: d++;
		}
	}
	cout<<"ÔªÒô:"<<w<<" ¸¨Òô:"<<d<<endl; 
	return 0;
}
