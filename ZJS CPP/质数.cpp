#include <iostream>
using namespace std; 
int main()
{
        int x;
        cin >> x;
        for(int i=2; i < x; i ++ )
        {
                if (x % i == 0 )
                {
                        cout << x << " " << i << endl;//用于查看x和i的值，调试结束没有问题后，要记得删除这些输出语句
                        cout << "not ";
                        break;
                }
        }
        cout << "prime" << endl;
        return 0;
}

