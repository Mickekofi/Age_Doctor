#include <iostream>
#include <unistd.h>
using namespace std;
#include "header.h"


int main() {

string message = "LOADING ";
string message2 = "=================================================";
string message3 = "Ha! Ha! Ha!...Welcome lost Soul!... people call me the god of Life and Death and from others I hear the name 'Witch Doctor', I don't Kill... I only cause Influence, I know why you are here! ";
string message4 = "You go explain tire.... no evidence, Read the Instructions and Come back Again for a Pacage! : Program ENDED!!  ";
string message5 = "So, How will you live the rest of your life!...and What will you call me!...You know, Life is too Short, don't live like the 99%...Arise and Shine";


anime_one(message);
anime_two(message2);
cout << "COMPLETE"<<endl;

anime_three(message3);
cout<< "  "<<endl;
cout << " "<<endl;
cout << "Note: Use only Numbers to represent your Year eg,2004 do the same for Month eg. 2 stands for January and Day eg,18, 31 etc"<<endl;
cout<< "  "<<endl;
sleep(3);
cout << "Lets check how good your Life is "<<endl;

cout << "  "<<endl;
sleep(1);
//User Year and Input Instructions 
cout << "Give me you Year of Birth     :       ";
int a;
cin >> a;
cout << ""<<endl;
if ((a > 1900)& (a < CurrentYear()) ) {
cout << "Write  me your Month of Birth  :     ";
}
else {
cout << "Entered Year is not Reasonable:Be Real to your self!   "<<endl;
anime_four(message4);
cout  <<" "<< endl;
cout  <<" "<< endl;
cout << "                      ~Program Ended!"<<endl;
exit(0);

}

//User Month and Input instructions  
int b;
cin >> b;
cout << ""<<endl;
if ((b > 0) & (b < 13) ) {
cout << "Now,Give me your number of Day of Birth   :     ";
}
else {
cout << "Entered Month format is not Accepted:Use numbers from 1 to 12!   "<<endl;
anime_four(message4);
cout  <<" "<< endl;
cout  <<" "<< endl;
cout << "                      ~Program Ended!"<<endl;
exit(0);


}


int c;
cin >> c;
if ((c > 0) & (c < 32) ) {

}
else {
cout << "Entered Day format is not Accepted:Use numbers from 1 to 31!   "<<endl;
anime_four(message4);
cout  <<" "<< endl;
cout  <<" "<< endl;
cout << "                      ~Program Ended!"<<endl;
exit(0);


}


cout << " "<<endl;
cout << " "<<endl;
cout << " "<<endl;
sleep(1);


int Day = input(a,b,c);
int Hour = (input(a,b,c)*24);
int Minute = (input(a,b,c)*24*60);
int Second = (input(a,b,c)*24*60*60);

float Age = (CurrentYear()-a) + ((CurrentMonth()-b)/(float)100) + ((CurrentDay()-c)/(float)100);
cout << "                       YOU HAVE LIVED  ~~  ";

cout<< Day<< " days on Earth!"<<endl;
cout << ""<<endl;
cout << " "<<endl;
sleep(3);

cout << "                       YOU HAVE LIVED  ~~  ";
cout<< Hour<<" hours on Earth!"<<endl;
cout << ""<<endl;
cout << " "<<endl;
sleep(3);

cout << "                       YOU HAVE LIVED  ~~  ";
cout<< Minute<<" minutes on Earth!"<<endl;
cout << ""<<endl;
cout << " "<<endl;
sleep(3);

cout << "                       YOU HAVE LIVED  ~~  ";
cout<< Second<<" seconds on Earth!"<<endl;


cout << " "<<endl;

sleep(3);
cout << "                       You are Aged    ~~  ";
cout<< Age;
cout << " years old"<<endl;
cout << ""<<endl;
sleep(5);
anime_five(message5);
cout  <<" "<< endl;
sleep(2);
cout  <<" "<< endl;
cout  <<" "<< endl;
cout  <<"To *Contribute,*Correct our algorithms,*Found an Error or Bug  or *Join us Build Projects... by"<< endl;
cout  <<" "<< endl;
cout  <<" "<< endl;
find_us();
return 0;
}
