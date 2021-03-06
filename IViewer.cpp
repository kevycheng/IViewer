// IViewer.cpp : Defines the entry point for the console application.
//

#ifdef _DEBUG
#define  _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#endif

#include "stdafx.h"


int main()
{

#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_DEBUG);
#endif

	Application app;
	app.RunMainLoop();

	return 1;
}
