#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Sheep //定义绵阳类Sheep
{
public:
	Sheep(string name, string color, const char* home); //声明有参构造函数
	Sheep(const Sheep& another);  //声明拷贝构造函数
	void show();
	~Sheep();
private:
	string _name;
	string _color;
	char* _home;
};
Sheep::Sheep(string name, string color, const char* home)
{
	cout << "调用构造函数" << endl;
	_name = name;
	_color = color;
	int len = strlen(home) + 1;
	_home = new char[len];
	memset(_home, 0, len);
	strcpy(_home, home);
}
Sheep::Sheep(const Sheep& another) //类外实现拷贝构造函数
{
	cout << "调用拷贝构造函数" << endl;
	_name = another._name;
	_color = another._color;
	_home = another._home;  //浅拷贝

}

void Sheep::show()
{
	cout << _name << " " << _color << " " << _home << endl;
}
Sheep::~Sheep()
{
	cout << "调用析构函数" << endl;
	if (_home != NULL)
		delete[]_home;
}

int main()
{
	const char *p = "beijing";
	Sheep sheepA("Doly", "white", p);
	cout << "sheepA:";
	sheepA.show();
	Sheep sheepB(sheepA);//使用sheepA初始化新对象sheepB
	cout << "sheepB";
	sheepB.show();
	return 0;
}