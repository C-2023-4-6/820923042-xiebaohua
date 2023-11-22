
#include <iostream>
using namespace std;
int main()
{
	cout << "输入三角形的三条边：";
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		if (fabs(a - b) < 1e-6 || fabs(a - c) < 1e-6||fabs(b - c) < 1e-6)
			cout << "该三角形的周长为：" << a + b + c << ",且该三角形为等腰三角形";
		else cout << "该三角形的周长为：" << a + b + c << "，该三角形不是等腰三角形";
	else cout << "三遍无法构成三角形";
	return 0;
}
