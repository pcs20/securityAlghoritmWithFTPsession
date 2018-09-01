#include "myIncludes.h"

#ifndef MYCODESCHEATS
#define MYCODESCHEATS

using namespace std;

class MyCodesCheats
{
private: //atributos
	string password, login;
	DWORD pointerBase;
	DWORD offset_0;
public:
	MyCodesCheats() : pointerBase((DWORD)GetModuleHandle("i3BaseDx.dll") + 0x000B6E5C),
		offset_0(0x414){}

	void calcAddress();
	void setLogin(string login);
	void setPassword(string password);

	string getLogin();
	string getPassword();
	string getAccount();
};

#endif