#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void sector1(bool isUserAdmin) {
    string explanation;

    cout << endl << "Sector 1 Chosen" << endl;
    cout << "Would you like an explanation of sector 1?" << endl;
    cin >> explanation;

    if (explanation == "Yes") {
        cout << "Yes" << endl;
        if (isUserAdmin == true) {
            cout << "You are an admin";
        }
    } else {
        cout << "No" << endl;
        if (isUserAdmin == true) {
            cout << "You are an admin";
        }
    }
}

void adminLogIn(bool isUserAdmin) {
    //Passkey is the correct key, Userkey is the one entered
        const string passKey = "Layne831";
        string userKey;

        cout << "Enter Passkey: ";
        char ch;
        ch = _getch();
        while(ch != 13){//character 13 is enter
            userKey.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        if(userKey == passKey) {
            short sector;
            isUserAdmin = true;

            cout << endl << "Welcome Jonathan!" << endl;
            cout << "Choose sector: ";
            cin >> sector;
            if (sector == 1) {
                sector1(isUserAdmin);
            }
        }
}

void normalLogIn(bool isUserAdmin) {
    //Passkey is the correct key, Userkey is the one entered
        const string passKey = "FrogsAreAwesome";
        string userKey;

        cout << "Enter Passkey: ";
        char ch;
        ch = _getch();
        while(ch != 13){//character 13 is enter
            userKey.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        if(userKey == passKey) {
            short sector;

            cout << endl << "Welcome Sebastion!" << endl;
            cout << "Choose sector: ";
            cin >> sector;
            if (sector == 1) {
                sector1(isUserAdmin);
            }
        }
}

void guestLogIn(bool isUserAdmin) {
    short sector;
        cout << "Welcome user, actions will be limited without an account";
        cout << endl << "Choose sector: ";
        cin >> sector;
        if (sector == 1) {
                sector1(isUserAdmin);
            }
}

int main()
{
    //Admin user have acess to everything, guest users dont
    string admin = "ChosenOne";
    string normalUser = "QuietLimb";
    string guest = "guest";
    // Tells the sectors to display the correct information
    bool isUserAdmin = false;
    bool usernameInput = true;

    while (usernameInput == true) {
        cout << "Enter Username: ";
        string user;
        cin >> user;
        if (user == admin) {
            usernameInput = false;
            adminLogIn(isUserAdmin);
        } else if (user == normalUser) {
            usernameInput = false;
            normalLogIn(isUserAdmin);
        } else if (user == guest) {
            usernameInput = false;
            guestLogIn(isUserAdmin);
        } else {
            cout << "User not found" << endl;
        }
    }
    return 0;
}