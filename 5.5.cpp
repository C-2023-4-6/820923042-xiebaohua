
#include <iostream>
using namespace std;
 
class Point
{
private:
	float x;
	float y;
public:
	Point(float x, float y):x(x),y(y)
	{}
	void setPoint(int i, int j)
	{
		this->x += i;
		this->y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};

int main()
{
	Point p(60, 80);
	p.setPoint(10, 20);
	p.display();
}