// console_check_serial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#import "sport.dll"

int _tmain(int argc, _TCHAR* argv[])
{
	SPortLib::ISPortAxPtr sp;
	sp->Open (L"COM2");
	return 0;
}

