#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

void anime_five(string f) {

    for(int i = 0; f[i] != '\0'; i++) {

        cout << f[i];
        
        //clears the screen
        cout.flush();
        
        usleep(90000);

    }


}