#include <iostream>
using namespace std;
//class Point_2d
//{
//	int x, y;
//	int getx() const;
//	int gety() const;
//
//};
//class Point_3d : Point_2d
//{
//	int z;
//	Point_3d();
//	int getz() const;
//};
class Point_2d
{
public:
	Point_2d(int, int);
};

class Point_3d :public Point_2d
{	
private:
	int z;
public:
	Point_3d(int a, int b, int c) : Point_2d(a,b), z(c) {}
	int getz() const { return z; }
};
class Point_2d
{
private:
	int x, y;
public:
	Point_2d(int a = 0, int b = 0) :x(a), y(b) {}
	int getx() const { return x; }
	int gety() const { return y; }
	operator Point_3d() const { return (Point_3d(2,3,4)); }
	operator int() const
	{
		return x;
	}
};


int main()
{
	Point_2d aPoint(2, 5);
	Point_3d bPoint(1, 2, 3);
	//Point_3d &b = aPoint;
	int a = aPoint;


	cout << aPoint.getx() << endl;
	cout << bPoint.getz() << endl;

	system("pause");
}

