﻿#include<iostream>
using namespace std;
int main()
{
	int* pi = new int(10); //创建一个Int 对象，初始值为10
	cout << "*pi=" << *pi << endl;
	*pi = 20; //通过指针改变内存中的值
	cout << "*pi"<< * pi << endl;//创建一个大小为10的char类型的数组
	char* pc = new char[10];
	for (int i = 0; i < 10; i++)
		pc[i] = i + 65;//向数组中存入元素
	for (int i = 0; i < 10; i++)
		cout << pc[i] << "";
	cout << endl;
	delete pi;//释放int对象
	delete[]pc;//释放char数组对象
	return 0;
}