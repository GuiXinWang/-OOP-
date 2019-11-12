#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
	double x, y;
public:
	point();
	point(double a, double b);
	point(const point &r);
	~point();
	double getx();
	double gety();
	void setx();
	void sety();
	void swapaxis(double *xa, double *xb);
	void swappoint(double &ra, double &rb);
	friend double getlength(point &, point &);
};
point::point()
{
	this->x = 0;
	this->y = 0;
}

point::point(double a, double b)
{
	this->x = a;
	this->y = b;
}

point::point(const point &r)
{
	this->x = r.x;
	this->y = r.y;
}

point::~point()
{
	cout << "自动调用析构函数" << endl;
}

double point::getx()
{
	return this->x;
}

double point::gety()
{
	return this->y;
}

void point::setx()
{
	cin >> this->x;
}

void point::sety()
{
	cin >> this->y;
}

void point::swapaxis(double *xa, double *xb)
{
	double t;
	t = *xa;
	*xa = *xb;
	*xb = t;
}

void point::swappoint(double &ra, double &rb)
{
	double t;
	t = ra;
	ra = rb;
	rb = t;
}

double getlength(point &A, point &B)
{
	double l;
	l = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
	return l;
}

int main()
{
	point array_stack[10];
	point *array_heap = new point[10];
	cout << "请输入第一组的坐标x y" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << "：";
		array_stack[i].setx();
		array_stack[i].sety();
	}
	cout << "请输入第二组的坐标x y" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << "：";
		array_heap[i].setx();
		array_heap[i].sety();
	}
	cout << "相同位置两个对象的距离" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ":" << getlength(array_stack[i], array_heap[i]) << endl;
	}
	system("pause");
	return 0;
}