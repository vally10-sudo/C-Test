#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << setw(10) << 3.14 << endl;
	cout << setw(10) << setfill('0') << 3.14 << endl;
	cout << setw(10) << setfill('0');
	return 0;
}