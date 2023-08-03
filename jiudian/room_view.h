#pragma once
#include"room_view.h"
#include"room_manager.h"
class RoomView //定义界面类
{
public:
	void show_menu();  //显示菜单
	void add_room();  //添加客房
	void remove_data();
	void set_room();
	void show_all();
	void run();
private:
	GuestRoomManager m_grm;
};
