// Containing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class controller
{
	int main(int argc, _TCHAR* argv[])
	{
		Afstandberekenaar ab;
		cout << ab.KortsteRoute("kraan", "boot");
		/*initSockets();
		Client* client = new Client(50007);
		string name = client->conversation("Name = ");
		for (;;)
		{
			string text = client->conversation(name + "> ");
			if (text == "halt") break;
		}
		delete client;
		exitSockets();

		cout << "Accepting clients ...\n";
		initSockets();
		Server server(50007);
		for (;;)
		{
			server.acceptClient();
		}
		exitSockets();
		*/
	}
};