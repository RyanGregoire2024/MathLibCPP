#include <string>
#include "pch.h"
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <iostream>


using namespace std;


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

string getWords() {

    srand(time(0));

    string op[] = { "+", "-", "*", "/" };
    int a = rand() % 3 + 1;

    return op[a];
}

void generateFruitNames(string a, string b) {

    for (int i = 0; i < 1; i++) {

        string fruitName[] = { a, b };

        cout << fruitName[0];
        cout << fruitName[1];
    }

}

void generatesNames(string a, string b, string c, string d, string e) {

    for (int i = 0; i < 1; i++) {

        string names[] = { a, b, c, d, e };

        cout << names[0];
        cout << names[1];
        cout << names[2];
        cout << names[3];
        cout << names[4];
    }




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

