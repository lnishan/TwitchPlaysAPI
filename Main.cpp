#include <iostream>
#include "TwitchPlaysAPI.h"

using namespace std;

void handleRaw(string caller, string text)
{
	cout << caller << ": " << text << endl;
}

int main(int argc, char* argv[])
{
	TwitchPlays tClient("TwitchPlays.cfg");
	tClient.hookRaw(handleRaw);

	tClient.start();

	// tClient.stop(); puts("STOPPED");

	while(1);
}
