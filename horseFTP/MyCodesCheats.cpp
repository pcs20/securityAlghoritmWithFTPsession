#include "MyCodesCheats.h"

void MyCodesCheats::setMascara()
{
	DWORD *NSD_1 = (DWORD*)(*(DWORD*)pointerBase_1 + offset_00);
	DWORD *NSD_2 = (DWORD*)(*(DWORD*)NSD_1 + offset_01);
	if (*(DWORD*)(*(DWORD*)NSD_2 + offset_02) != 0x00) {
		//remove capacete padrão
		*(DWORD64*)(*(DWORD*)NSD_2 + offset_02) = 0x00;
		//atribui nova máscara ao personagem
		*(DWORD*)(*(DWORD*)NSD_2 + offset_02) = (DWORD)700122;
	}
	else {
		*(DWORD*)(*(DWORD*)NSD_2 + offset_02) = (DWORD)700122;
	}
}

void MyCodesCheats::calcAddress() {
	DWORD *NSD_1 = (DWORD*)(*(DWORD*)pointerBase + offset_0);
	DWORD *NSD_2 = (DWORD*)(*(DWORD*)NSD_1 + offset_1);
	DWORD *NSD_3 = (DWORD*)(*(DWORD*)NSD_2 + offset_2);
	DWORD *NSD_4 = (DWORD*)(*(DWORD*)NSD_3 + offset_3);

	BYTE *login = (BYTE*)(*(DWORD*)NSD_4 + 0x30);
	BYTE *password = (BYTE*)(*(DWORD*)NSD_4 + 0x80);

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
