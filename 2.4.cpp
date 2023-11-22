/*
#include <iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	cout << "请输入第一个数据：";
	cin >> num1;
	cout << "请输入运算符（+，-，*，/）：";
	cin>>op;
	cout << "请输入第二个数据：";
	cin >> num2;
	cout << "计算结果为：";
	switch (op) {
	case '+':cout << num1 + num2;
		break;
	case'-':cout << num1 - num2;
		break;
	case'*':cout << num1 * num2;
		break;
	case'/':if (num2 == 0) cout << "被除数不能为0";
		   else cout << num1 / num2;
		break;
	default:cout << "错误！运算符非法！";
	}
	return 0;
}
*/