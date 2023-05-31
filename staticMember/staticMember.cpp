#include<iostream>
using namespace std;
class Student
{
public:
	Student(string name);
	~Student();
	static int _sum;
private:
	string _name; //shengming xuesheng 姓名的成员变量
};
//类外实现Student类有参构造函数
Student::Student(string name)
{
	this->_name = name;
	_sum++;
}
Student::~Student() {}  //类外实现析构函数
int Student::_sum = 0;
int main()
{
	Student stu1("zhangsan");
	Student stu2("lisi");
	cout << "人数是：" << stu1._sum << endl; //通过对象访问静态成员变量
	cout << "人数是：" << stu2._sum << endl; //通过对象访问静态成员变量
	cout << "renshu shi:" << Student::_sum << endl; //通过类访问静态成员变量
	cout << "stu1的 daxiao shi:" << sizeof(stu1) << endl;
	return 0;
}