// vcpkgdemo.cpp : Defines the entry point for the application.
//

#include "vcpkgdemo.h"

using namespace std;

int maintest()
{
	char str[1024] = "test vcpkg demo";
	output(str);
	getchar();
	return 0;
}

void output(char* str)
{
	cout << str << endl;
}