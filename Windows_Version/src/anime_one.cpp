#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void anime_one(string a) {

    for(int i = 0; a[i] != '\0'; i++) {

        cout << a[i];
        
        //clears the screen
        cout.flush();
        
        Sleep(700);//

    }


}