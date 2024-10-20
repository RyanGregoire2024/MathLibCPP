#include "pch.h"
#include <time.h>
#include <stdlib.h>


int AddDays(int a, int b, int c, int d) {

    return a + b + c + d;
}


int SubDays(int a, int b, int c, int d) {
    return a - b - c - d;
}

int AddYears(int a) {
    return a + 365;
}

int SubYears(int a) {
    return a - 365;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

