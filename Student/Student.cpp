﻿#include<iostream>
using namespace std;
class Student //定义学生类
{
public://公有类型
	void study(); //声明表示学习的成员
	void exam(); //声明表示考试的成员函数
	string _name; //声明表示姓名的成员变量
	int _age; //声明表示年龄的成员变量
};
void Student::study() //类外实现study()成员函数
{
	cout << "学习C++" << endl;
}
void Student::exam() //类外实现exam()成员函数
{
	cout<<"C++考试成绩100分" << endl;
}
int main()
{
	Student stu;
	stu._name = "张三";
	stu._age = -20;
	cout << stu._name << stu._age << "岁" << endl;
	stu.study();
	stu.exam();
	return 0;
}