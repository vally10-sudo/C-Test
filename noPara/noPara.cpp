//自定义无参构造函数

#include<iostream>
#include<iomanip>
using namespace std;
class Clock 
{
public:
	Clock();
	void showTime();
private:
	int _hour;
	int _min;
	int _sec;
};
Clock::Clock()   //类外实现无参构造函数
{
	_hour = 0;   ///初始化过程，将成员变量初始化为0
	_min = 0;
	_sec = 0;
}
void Clock::showTime()
{
	cout << setw(2) << setfill('0') << _hour << ":" << setw(2) << setfill('0') << _min << ":" << setw(2) << setfill('0') << _sec << endl;
}
int main()
{
	Clock clock;  //创建对象clock
	cout << "clock:";
	clock.showTime();   //通过对象调用成员函数showTime()显示时间
	return 0;
}