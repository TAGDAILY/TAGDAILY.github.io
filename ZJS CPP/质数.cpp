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
                        cout << x << " " << i << endl;//���ڲ鿴x��i��ֵ�����Խ���û�������Ҫ�ǵ�ɾ����Щ������
                        cout << "not ";
                        break;
                }
        }
        cout << "prime" << endl;
        return 0;
}

