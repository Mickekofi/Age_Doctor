#include <iostream>
#include <ctime>
using namespace std;

int input(int x, int y, int z) {

//pre must use time commands
    time_t now = time(nullptr);
    tm* currentTime = localtime(&now);
    
    //Extracting the current year from the tm structure
int CurrentYear = currentTime->tm_year + 1900; 
    
    //Extracting the current month from th tm structure
int CurrentMonth = currentTime->tm_mon + 1;

    //Extracting the current day from the tm Structure 
int CurrentDay = currentTime->tm_mday;


int stage1 = ((CurrentYear-1-x)*365);
int stage2 = ((12-y)*31);
int stage3 = (CurrentMonth*31);
int stage4 = (31-CurrentDay);
int stage5 = (31-z);

int sum = stage1 + stage2 + stage3 - stage4 + stage5;

return sum;

}

// This Function is made to check on an if statement found in the main().
int CurrentYear() {
    //pre must use time commands
    time_t now = time(nullptr);
    tm* currentTime = localtime(&now);
    
    //Extracting the current year from the tm structure
    int Current_Year = currentTime->tm_year + 1900;
    return Current_Year; 
}

//The Functions below is made to calculate users age.  
int CurrentMonth() {
    //pre must use time commands
    time_t now = time(nullptr);
    tm* currentTime = localtime(&now);
    
    //Extracting the current Month from the tm structure
    int Current_Month = currentTime->tm_mon + 1;
    return Current_Month; 
}

int CurrentDay() {
    //pre must use time commands
    time_t now = time(nullptr);
    tm* currentTime = localtime(&now);
    
    //Extracting the current Month from the tm structure
    int Current_Day = currentTime->tm_mday;
    return Current_Day; 
}
