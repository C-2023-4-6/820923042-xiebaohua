/*
#include <iostream>
#include "mytriangle.h"
using namespace std;

bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)
		return true;
	else return false;
}

double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3)/2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

void main()
{
	double a, b, c;
	cout << "输入三角形的三边边长：";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
		cout << "三角形的面积为：" << area(a, b, c) << endl;
	else cout << "错误！" << endl;
}
*/