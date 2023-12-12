/*
#include <iostream>
using namespace std;
int M(int x, int y)               //求最大公约数函数
{
	int i;
	for (i = min(x, y); !(x % i == 0 && y % i == 0); i--)
		if (i < 1) break;;
	return i;
}
int m(int p, int q)              //求最小公倍数函数
{
	int j;
	for (j = max(p, q); !(j % p == 0 && j % q == 0); j++);
	return j;
}
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	cout << "最大公约数为：" << M(a, b) << endl;
	cout << "最小公倍数为：" << m(a, b) << endl;
	return 0;
}
*/