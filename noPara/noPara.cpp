//�Զ����޲ι��캯��

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
Clock::Clock()   //����ʵ���޲ι��캯��
{
	_hour = 0;   ///��ʼ�����̣�����Ա������ʼ��Ϊ0
	_min = 0;
	_sec = 0;
}
void Clock::showTime()
{
	cout << setw(2) << setfill('0') << _hour << ":" << setw(2) << setfill('0') << _min << ":" << setw(2) << setfill('0') << _sec << endl;
}
int main()
{
	Clock clock;  //��������clock
	cout << "clock:";
	clock.showTime();   //ͨ��������ó�Ա����showTime()��ʾʱ��
	return 0;
}