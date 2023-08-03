#include"guest_room.h"
#include<iostream>
#include<time.h>
#include<string>
#include"room_manager.h"
#include"room_view.h"
using namespace std;
int main()
{
	RoomView grv; //创建RoomView类对象
	grv.run();  //启动酒店管理系统
	return 0;
}