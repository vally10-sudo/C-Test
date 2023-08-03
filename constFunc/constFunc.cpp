#include<iostream>
using namespace std;
class Person
{
public:
	Person(string name , int age, string addr,string favFruit);  //?明有?构造函?
	~Person(); //?明析构函?
	const string _addr; //?明表示住址的常成??量
	
	void myInfor() const; //?明?示?人信息的常成?函?
	void myInfor();  //普通函数
	void place();  //住址
private:
	const string _name;
	const int _age;
	string _favFruit; //水果普通成员变量

};
//有参构造函数初始化对象
Person::Person(string name, int age, string addr, string favFruit) :
	_name(name), _age(age), _addr(addr), _favFruit(favFruit)
{

}
void Person::myInfor() const  //类外实现成员函数
{
	cout << "my name is " << _name << "my age is " << _age << "sui" << "I like eat" << _favFruit << endl;

}
Person::~Person() {

}
void Person::myInfor()
{
	_favFruit = "taozi";
	cout << "mynameis" << _name << "jinnian" << _age << "sui" << "woxihua" << _favFruit << endl;
	place();
}
void Person::place()
{
	cout << "my place is" << _addr << endl;
}
int main()
{
	Person p1("zhangsan", 18, "beidajia", "pingguo"); // make obj p1
	p1.myInfor();
	const Person p2("lisi", 19, "nandajia", "juzi");
	p2.myInfor();
	return 0;
}
