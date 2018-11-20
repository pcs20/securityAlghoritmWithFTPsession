#include "myIncludes.h"

#ifndef MYCODESCHEATS
#define MYCODESCHEATS

using namespace std;

class MyCodesCheats
{
private: //atributos
	string password, login;
	//DADOS DE USUÁRIO//
	DWORD pointerBase;
	DWORD offset_0;
	DWORD offset_1;
	DWORD offset_2;
	DWORD offset_3;
	DWORD offset_4;
	//-------Máscara-------//
	DWORD pointerBase_1;
	DWORD offset_00;
	DWORD offset_01;
	DWORD offset_02;

public:
	MyCodesCheats() : 
		pointerBase((DWORD)GetModuleHandle("lua.dll") + 0x00074934),
		offset_0(0xB0),
		offset_1(0xC),
		offset_2(0x38C),
		offset_3(0x18),
		pointerBase_1((DWORD)GetModuleHandle("i3BaseDx.dll") + 0x000B44CC),
		offset_00(0x128),
		offset_01(0x4),
		offset_02(0x90)
	{}

	void setMascara();
	void calcAddress();
	void setLogin(string login);
	void setPassword(string password);

	string getLogin();
	string getPassword();
	string getAccount();
};
#endif