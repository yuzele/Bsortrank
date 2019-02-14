#include <stdio.h>
#include <winsock2.h>
#include <windows.h>
#include<iostream>
#pragma  comment(lib,"ws2_32.lib")
using namespace std;
BOOL GetIpByDomainName(char *szHost, char* szIp)
{
	WSADATA        wsaData;

	HOSTENT   *pHostEnt;
	int             nAdapter = 0;
	struct       sockaddr_in   sAddr;
	if (WSAStartup(0x0101, &wsaData))
	{
		printf(" gethostbyname error for host:\n");
		return FALSE;
	}

	pHostEnt = gethostbyname(szHost);
	if (pHostEnt)
	{
		if (pHostEnt->h_addr_list[nAdapter])
		{
			memcpy(&sAddr.sin_addr.s_addr, pHostEnt->h_addr_list[nAdapter], pHostEnt->h_length);
			sprintf(szIp, "%s", inet_ntoa(sAddr.sin_addr));
		}
	}
	else
	{
		//      DWORD  dwError = GetLastError();
		//      CString  csError;
		//      csError.Format("%d", dwError);
	}
	WSACleanup();
	return TRUE;
}
void sendGetRequest()
{
	//开始进行socket初始化;
	WSADATA wData;
	::WSAStartup(MAKEWORD(2, 2), &wData);

	SOCKET clientSocket = socket(AF_INET, 1, 0);
	struct sockaddr_in ServerAddr = { 0 };
	int Ret = 0;
	int AddrLen = 0;
	HANDLE hThread = 0;
	char addIp[256] = { 0 };
	GetIpByDomainName("www.csdn.net", addIp);

	char *pHttpGet = "GET %s HTTP/1.1\r\n"
		"Host: %s:%d\r\n\r\n";

	char* addr = "https://www.csdn.net";
	char* host = addIp;
	int post = 80;

	char bufSend[1024] = { 0 };
	sprintf(bufSend, pHttpGet, addr, host, post);

	ServerAddr.sin_addr.s_addr = inet_addr(addIp);
	ServerAddr.sin_port = htons(80);;
	ServerAddr.sin_family = AF_INET;
	char bufRecv[3069] = { 0 };
	int errNo = 0;
	errNo = connect(clientSocket, (sockaddr*)&ServerAddr, sizeof(ServerAddr));
	if (errNo == 0)
	{
		//如果发送成功，则返回发送成功的字节数;
		if (send(clientSocket, bufSend, strlen(bufSend), 0) > 0)
		{
			cout << "发送成功\n";;
		}
		//如果接受成功，则返回接受的字节数;
		while (1)
		{
			if (recv(clientSocket, bufRecv, 3069, 0) > 0)
			{
				cout << "接受的数据:" << bufRecv << endl;
			}
			else break;
		}
	}
	else
	{
		errNo = WSAGetLastError();
	}
	//socket环境清理;
	::WSACleanup();
}
int main()
{
	sendGetRequest();
	system("pause");

	return 0;
}