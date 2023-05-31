#include<iostream>
//C++中可以使用这行预处理指令来修改执行字符集
//#pragma execution_character_set("utf-8")
//#pragma execution_character_set("gbk")
using namespace std;
class Student //定??生?Student
{
public:
	void study();
	void exam();
	void setName(string name);
	void setAge(int age);
	//声明表示学习的成员函数，表示考试的成员函数，设置姓名的成员函数，设置年龄的成员函数
	string getName();
	int getAge();
	//声明获取姓名的成员函数，声明获取年龄的成员函数
private:
	string _name;//声明表示姓名的成员变量
	int _age; //声明表示年龄的成员变量
};
void Student::study()  //类外实现study()成员函数
{
	cout << "学习c++" << endl;
}
void Student::exam()  //类外实现exam()成员函数
{
	cout<<"C++考试成绩100分" << endl;
}
void Student::setName(string name) //类外实现setName()成员函数
{
	_name = name;
}
void Student::setAge(int age)
{
	if (age < 0 || age>100)
	{
		cout << "_name" << "年龄输入错误" << endl;
		_age = 0;
	}
	else
		_age = age;
}
string Student::getName()
{
	return _name;
}
int Student::getAge()
{
	return _age;
}
int main()
{
	Student stu;
	stu.setName("zhangsan");
	stu.setAge(-20);
	cout << stu.getName() << stu.getAge() << "岁" << endl;
	stu.study();
	stu.exam();
	Student stu1;
	stu1.setName("lisi");
	stu1.setAge(22);
	cout << stu1.getName() << stu1.getAge() << "岁" << endl;
	stu1.study();
	stu1.exam();
	return 0;
}