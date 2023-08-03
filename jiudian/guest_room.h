#pragma once
#include <string>
#include<map>
using namespace std;
//�w? enum ROOM_STATE�T??���A��ܫȩ�??�G��?�B�J��
enum ROOM_STATE { FREE = 0, CHECK_IN };
//�w?�ȩ�?
class GuestRoom
{
public:
	GuestRoom() = default;   //�����q?�۳y��?
	GuestRoom(string, int, int, int, ROOM_STATE);  //���۳y��?
	string generate_number(); //�ͦ��ȩ�??
	string show_state(); //?�ܫȩ�??
	bool save_data(map<string,GuestRoom>&); //�O�s?�u
	map<string, GuestRoom>read_data();//?��?�u
public:
	string get_num(); //?����???
	string get_name();  //?���ȩЦW?
	int get_price();  //?���ȩ�ɲ��
	int get_area();  //?���ȩЭ�?
	int get_bed_num(); //?���ȩЧɦ�?�q
	void set_state();  //?�m�ȩ�??
private:
	string m_number; //�ȩ�??
	int m_price; //�ȩ�ɲ��
	int m_area;  //�ȩЭ�?
	int m_bed_number; //�ȩЧɦ�?�q
	string m_name; //�ȩЦW?
	enum ROOM_STATE m_state; //�ȩ�??

};
