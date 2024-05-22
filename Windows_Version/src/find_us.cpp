#include <iostream>
#include <windows.h>
#include <_mingw.h>
#include "header.h"
using namespace std;

void find_us() {
int a ;
cout << "[1]find project on GitHub"<<endl;
cout << ""<<endl;
cout << "[2]Connect us on Linkedin"<<endl;
cout << ""<<endl;
cout << "[3]Connect us on Whatsapp"<<endl;
cout << ""<<endl;
cout << "[4]About me and other Projects "<<endl;
cout << ""<<endl;
cout <<"[5]Quit"<<endl;
Sleep(1000);
cout << ""<<endl;
cout << ""<<endl;
cout << "Choose any number  :  ";
cin >> a;
cout << ""<<endl;
cout << ""<<endl;
switch(a) {
    case 1:
    cout << "Processing...please make sure you have INTERNET connection"<<endl;
    Sleep(2000);
    cout << "Press Enter to continue..."<<endl;  
    cin.get();
    redirect_git();
    break;

    case 2:
    cout << "Processing...please make sure you have INTERNET connection"<<endl;
    Sleep(2000);
    cout << "Press Enter to continue..."<<endl;  
    cin.get();
    redirect_li();
    break;

    case 3:
    cout << "Processing...please make sure you have INTERNET connection"<<endl;
    Sleep(2000);
    cout << "Press Enter to continue..."<<endl;  
    cin.get();
    redirect_wh();
    break;

    case 4:
    cout << "Processing...please make sure you have INTERNET connection"<<endl;
    Sleep(2000);
    cout << "Press Enter to continue..."<<endl;  
    cin.get();
    redirect_gitme();
    break;

    default :
    cout << ""<<endl;
    cout << ""<<endl;
    cout << "WRONG input,Bye..Come again soon for a package!"<<endl;
    exit(0);


}



}