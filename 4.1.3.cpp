//
//#include <iostream>
//using namespace std;
//
//bool change(bool x)
//{
//	return (!x);
//}
//
//int main() 
//{
//	bool L[100] = { 0, };
//	for (int k = 0; k < 100; k++)
//		L[k] = 0;
//	for (int s = 1; s < 101; s++)
//	{
//		for (int i = s; i < 101;i= i + s)
//		{
//			L[i-1]=change(L[i-1]);
//		}
//	}
//	for (int j = 0; j < 100; j++)
//	{
//		if (L[j] == 1) cout << "L" << j+1<<" ";
//	}
//	return 0;
//}