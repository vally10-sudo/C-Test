#include<iostream>
//C++�п���ʹ������Ԥ����ָ�����޸�ִ���ַ���
//#pragma execution_character_set("utf-8")
//#pragma execution_character_set("gbk")
using namespace std;
class Student //��??��?Student
{
public:
	void study();
	void exam();
	void setName(string name);
	void setAge(int age);
	//������ʾѧϰ�ĳ�Ա��������ʾ���Եĳ�Ա���������������ĳ�Ա��������������ĳ�Ա����
	string getName();
	int getAge();
	//������ȡ�����ĳ�Ա������������ȡ����ĳ�Ա����
private:
	string _name;//������ʾ�����ĳ�Ա����
	int _age; //������ʾ����ĳ�Ա����
};
void Student::study()  //����ʵ��study()��Ա����
{
	cout << "ѧϰc++" << endl;
}
void Student::exam()  //����ʵ��exam()��Ա����
{
	cout<<"C++���Գɼ�100��" << endl;
}
void Student::setName(string name) //����ʵ��setName()��Ա����
{
	_name = name;
}
void Student::setAge(int age)
{
	if (age < 0 || age>100)
	{
		cout << "_name" << "�����������" << endl;
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
	cout << stu.getName() << stu.getAge() << "��" << endl;
	stu.study();
	stu.exam();
	Student stu1;
	stu1.setName("lisi");
	stu1.setAge(22);
	cout << stu1.getName() << stu1.getAge() << "��" << endl;
	stu1.study();
	stu1.exam();
	return 0;
}