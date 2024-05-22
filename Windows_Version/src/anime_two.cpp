#include <iostream>
#include <string>
#include <_mingw.h>
#include <windows.h>
using namespace std;

void anime_two(string b) {

    for(int i = 0; b[i] != '\0'; i++) {

        cout << b[i];
        
        //clears the screen
        cout.flush();
        
        Sleep(100);// 500000 microseconds = 0.5 seconds

    }


}