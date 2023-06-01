﻿#include<iostream>
using namespace std;
class Circle
{
	friend void getArea(Circle& circle);
	//声明普通函数getArea()为友元函数
private:
	float _radius;
	const float PI = 3.14;
public:
	Circle(float radius);
	~Circle();
};

Circle::Circle(float radius = 0) :_radius(radius)
{
	cout << "初始化圆的半径为：" << _radius << endl;
}
Circle::~Circle() {}
void getArea(Circle & circle) {
		//访问类中的成员变量
	cout << "yuande banjingshi :" << circle._radius << endl;
	cout << "yuan的面积是" << circle.PI * circle._radius * circle._radius << endl;
	cout << "youyuan hanshu xiugai banjing:" << endl;
	circle._radius = 1;
	cout << "yuande banjingshi:" << circle._radius << endl;
}
int main()
{
	Circle circle(10);
	getArea(circle);
	return 0;
}
