#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    system ("Color 0B");
    cout << "| LOGIN SCREEN |" << endl;
    string Username, Password;
    cout << " Please enter Username: ";
    cin >> Username;
    cout << "Please enter Password: ";
    cin >> Password;
    if((Username == "PLATON")&&(Password == "2021"))
    {
        system ("Color 0A");
        cout << "Welcome!" << endl;
        cout << "| LOGIN SCREEN |" << endl;
        return 0;
    }
    else
    {
        system ("Color 0C");
        cout << "*Username and Password do not mach, Please try again later!" << endl;
        cout << "| LOGIN SCREEN |" << endl;
        return 0;
    }
}
