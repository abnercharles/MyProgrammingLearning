//文件名：10-11.cpp
//计算两个有理数的和与积
#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;
#include "Rational.h"                           //使用Rational类
#include "goods.h"

//CreateAndDestroy globe(0);
//
//
//void f1()
//{
//	cout << "F1: " << endl;
//	static CreateAndDestroy obj1(1);
//	CreateAndDestroy obj2(globe);
//	CreateAndDestroy obj3 = obj1;
//
//}

//CreateAndDestroy f1(CreateAndDestroy arg1, CreateAndDestroy &arg2)
//{
//	CreateAndDestroy obj3(3);
//	arg2 = obj3;
//	return arg1;
//}
//void print(Goods obj)
//{
//	cout << obj.weight() << '\t' << obj.totalWeight() << endl;
//}

int main()
{
	/*int n, d;
	Rational r1, r2, r3;                        //定义3个Rational类的对象
	cout << "请输入第一个有理数(分子和分母)：";
	cin >> n >> d;
	r1.create(n, d);

	cout << "请输入第二个有理数(分子和分母)：";
	cin >> n >> d;
	r2.create(n, d);

	r3.add(r1, r2);                            //执行r3=r1+r2
	r1.display(); cout << " + "; r2.display();
	cout << " = "; r3.display(); cout << endl;

	r3.multi(r1, r2);                          //执行r3=r1*r2
	r1.display(); cout << " * "; r2.display();
	cout << " = "; r3.display(); cout << endl;

	return 0;*/

	//Rational r1(3,6);
	//r1.display();

	//CreateAndDestroy obj4(4);
	//f1();
	//f1();
	//CreateAndDestroy obj1(1), obj2(2);
	//CreateAndDestroy obj5(5);
	//obj5 = f1(obj1, obj2);

	//return 0;
	//Goods gold(4);
	//Goods shit(3);
	//Goods poo(20);

	//int total = Goods::totalWeight();
	//cout << total << gold.total_weight << endl ;
	//Goods::total_weight = 0;
	//int total2 = Goods::totalWeight();
	//cout << total2;

	//Goods g1(30), g2(50), g3(70);
	//print(g1);
	//cout << Goods::totalWeight() << endl;
	//return 0;
	//Rational r(3, 6);
	//Rational r2(4, 7);
	//Rational r3 = r * Rational(3);
	//Rational r4 = r * r2 + r3 * 5;
	//cout << (double)r4;
	//system("pause");


	int i = 4;
	//i = ++i;
	cout << ++i << ++i << ++i << endl;

	int j = 4;
	cout << j++ << j++ << j++ << endl;

	int k = 0;
	cout << k++ << k++ << ++k << endl;

	system("pause");
	return 0;


}

