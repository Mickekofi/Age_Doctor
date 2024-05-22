#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void anime_three(string c) {

    for(int i = 0; c[i] != '\0'; i++) {

        cout << c[i];
        
        //clears the screen
        cout.flush();
        
        Sleep(90);

    }


}