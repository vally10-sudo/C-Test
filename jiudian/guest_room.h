#pragma once
#include <string>
#include<map>
using namespace std;
//定? enum ROOM_STATE枚??型，表示客房??：空?、入住
enum ROOM_STATE { FREE = 0, CHECK_IN };
//定?客房?
class GuestRoom
{
public:
	GuestRoom() = default;   //提供默?构造函?
	GuestRoom(string, int, int, int, ROOM_STATE);  //有构造函?
	string generate_number(); //生成客房??
	string show_state(); //?示客房??
	bool save_data(map<string,GuestRoom>&); //保存?据
	map<string, GuestRoom>read_data();//?取?据
public:
	string get_num(); //?取客???
	string get_name();  //?取客房名?
	int get_price();  //?取客房价格
	int get_area();  //?取客房面?
	int get_bed_num(); //?取客房床位?量
	void set_state();  //?置客房??
private:
	string m_number; //客房??
	int m_price; //客房价格
	int m_area;  //客房面?
	int m_bed_number; //客房床位?量
	string m_name; //客房名?
	enum ROOM_STATE m_state; //客房??

};
