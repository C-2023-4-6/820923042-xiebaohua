/*
#include <iostream>
using namespace std;
int M(int x, int y)               //�����Լ������
{
	int i;
	for (i = min(x, y); !(x % i == 0 && y % i == 0); i--)
		if (i < 1) break;;
	return i;
}
int m(int p, int q)              //����С����������
{
	int j;
	for (j = max(p, q); !(j % p == 0 && j % q == 0); j++);
	return j;
}
int main()
{
	int a, b;
	cout << "������������������";
	cin >> a >> b;
	cout << "���Լ��Ϊ��" << M(a, b) << endl;
	cout << "��С������Ϊ��" << m(a, b) << endl;
	return 0;
}
*/