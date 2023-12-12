/*
#include <iostream>
using namespace std;

int f(int n,int left)      //n为天数,left为剩余
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
	cout << "第一天猴子共摘了" << f(10,1)  << "个桃子。" << endl;
}
*/