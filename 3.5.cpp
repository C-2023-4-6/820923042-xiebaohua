/*
#include <iostream>
using namespace std;

int f(int n,int left)      //nΪ����,leftΪʣ��
{
	int t;
	if (n == 1) t = left;
	else {
		t = 2 * (f(n-1,left) + 1);
	}
	return t;
}

void main()
{
	cout << "��һ����ӹ�ժ��" << f(10,1)  << "�����ӡ�" << endl;
}
*/