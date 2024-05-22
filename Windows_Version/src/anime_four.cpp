#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void anime_four(string d) {

    for(int i = 0; d[i] != '\0'; i++) {

        cout << d[i];
        
        //clears the screen
        cout.flush();
        
        Sleep(90);

    }


}