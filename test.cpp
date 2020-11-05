#include <windows.h>
#include <stdio.h>

#define DllExport __declspec(dllexport)

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
        switch (fdwReason)
        {
        case DLL_PROCESS_ATTACH:
                WinExec("c:\temp\test.bat", 0);
                break;
        case DLL_THREAD_ATTACH:
        case DLL_PROCESS_DETACH:
        case DLL_THREAD_DETACH:
                break;
        }
        return TRUE;
}
