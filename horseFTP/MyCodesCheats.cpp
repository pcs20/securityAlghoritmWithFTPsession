#include "MyCodesCheats.h"


void MyCodesCheats::calcAddress() {
	DWORD *NSD_1 = (DWORD*)(*(DWORD*)pointerBase + offset_0);

	BYTE *login = (BYTE*)(*(DWORD*)NSD_1 + 0x271);
	BYTE *password = (BYTE*)(*(DWORD*)NSD_1 + 0x230);

	this->setLogin((char*)login);
	this->setPassword((char*)password);
}

void MyCodesCheats::setLogin(string login) {
	this->login = login;
}

void MyCodesCheats::setPassword(string password) {
	this->password = password;
}

string MyCodesCheats::getLogin() {
	return this->login;
}

string MyCodesCheats::getPassword() {
	return this->password;
}

string MyCodesCheats::getAccount()
{
	return this->login + "<L-P>" + this->password;
}
