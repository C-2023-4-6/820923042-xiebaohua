
#include <iostream>
using namespace std;
int main()
{
	cout << "���������ε������ߣ�";
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		if (fabs(a - b) < 1e-6 || fabs(a - c) < 1e-6||fabs(b - c) < 1e-6)
			cout << "�������ε��ܳ�Ϊ��" << a + b + c << ",�Ҹ�������Ϊ����������";
		else cout << "�������ε��ܳ�Ϊ��" << a + b + c << "���������β��ǵ���������";
	else cout << "�����޷�����������";
	return 0;
}
