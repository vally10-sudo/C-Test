﻿#include<iostream>
using namespace std;
class Birth  ///定义出生日期类
{
public:
	Birth(int year, int month, int day); //构造函数
	void show(); //声明成员函数show()
private:
	int _year;
	int _month;
	int _day;
};
//类外实现构造函数
Birth::Birth(int year, int month, int day) :_year(year), _month(month), _day(day)
{
	cout << "Birth类构造函数" << endl;
}
//类外实现show()函数
void Birth::show()
{
	cout << "出生日期：" << _year << "-" << _month << "-" << _day << endl;
}
class Student  //定义学生类
{
public:
	//构造函数
	Student(string name, int id, int year, int month, int day);
	void show();
private:
	string _name;
	int _id;
	Birth birth;
};
//类外实现构造函数
Student::Student(string name, int id, int year, int month, int day) :birth(year, month, day)
{
	cout << "Student类构造函数" << endl;
	_name = name;
	_id = id;
}
//类外实现show()函数
void Student::show()
{
	cout << "姓名：" << _name << endl;
	cout << "学号：" << _id << endl;
	birth.show();
}
int main()
{
	Student stu("mark", 10000, 2000, 1, 1); //创建学生对象stu
	stu.show(); //显示学生信息
	return 0;
}