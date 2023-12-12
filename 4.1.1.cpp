/*
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	cout << "Enter ten numbers:";
	cin >> num1>>num2>> num3>> num4>> num5>> num6>> num7>> num8>> num9>> num10;
	/*********依次判断十个数是否为新的值，并保存***********//*
	int a[10] = { num1, };
	int n = 1;
	if (num2 != num1)  
	{
		a[0 + n] = num2;
		n++;
	}
	if (num3 != num1&&num3!=num2)
	{
		a[0 + n] = num3;
		n++;
	}
	if (num4 != num1&&num4!=num2&&num4!=num3)
	{
		a[0 + n] = num4;
		n++;
	}
	if (num5 != num1&&num5!=num2&&num5!=num3&&num5!=num4)
	{
		a[0 + n] = num5;
		n++;
	}
	if (num6 != num1 && num6 != num2 && num6 != num3 && num6 != num4 && num6 != num5)
	{
		a[0 + n] = num6;
		n++;
	}
	if (num7 != num1 && num7 != num2 && num7 != num3 && num7 != num4 && num7 != num5 && num7 != num6)
	{
		a[0 + n] = num7;
		n++;
	}
	if (num8 != num1 && num8 != num2 && num8 != num3 && num8 != num4 && num8 != num5 && num8 != num6 && num8 != num7)
	{
		a[0 + n] = num8;
		n++;
	}
	if (num9 != num1 && num9 != num2 && num9 != num3 && num9 != num4 && num9 != num5 && num9 != num6 && num9 != num7 && num9 != num8)
	{
		a[0 + n] = num9;
		n++;
	}
	if (num10 != num1 && num10 != num2 && num10 != num3 && num10 != num4 && num10 != num5 && num10 != num6 && num10 != num7 && num10 != num8 && num10 != num9)
	{
		a[0 + n] = num10;
		n++;
	}
	cout << "The distinct numbers are:";
	for (int i=0; i<n; i++)          //依次输出数组中保存的数
		cout << a[i] << " ";
	return 0;
}
*/