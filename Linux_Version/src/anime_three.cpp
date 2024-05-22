#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

void anime_three(string c) {

    for(int i = 0; c[i] != '\0'; i++) {

        cout << c[i];
        
        //clears the screen
        cout.flush();
        
        usleep(90000);

    }


}