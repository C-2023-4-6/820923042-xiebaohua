
#include <iostream>
using namespace std;
int main()
{
	cout << "������δ֪��x(0<x<10)��";
	float x;
	cin >> x;
	if (x > 0 && x < 10)
		if (x < 1) 
			cout << 3 - 2 * x;
		else if (x < 5) 
			cout << 1 / (2 * x) + 1;
		else cout << x * x;
	else cout << "x���ں�����������";
	return 0;
}
