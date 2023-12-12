/*
#include <iostream>
using namespace std;
int main()
{
	double a[10] = {1.1,11.0,2.2,6.6,4.4,3.3,5.5,8.8,7.7,9.9};           
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				double t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int k = 0; k < 10; k++)
		cout << a[k] << "\t";
	return 0;
}
*/