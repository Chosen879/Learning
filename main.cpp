#include <iostream>
#include <string>

using namespace std;

void sector1(bool isUserAdmin) {
    string explanation;

    cout << endl << "Sector 1 Chosen" << endl;
    cout << "Would you like an explanation of sector 1?" << endl;
    cin >> explanation;

    if (explanation == "true") {
        cout << "true" << endl;
        if (isUserAdmin == true) {
            cout << "You are an admin";
        }
    } else {
        cout << "false";
        if (isUserAdmin == true) {
            cout << "You are an admin";
        }
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

    cout << "Enter Username: ";
    string user;
    cin >> user;
    if (user == admin) {
        //Passkey is the correct key, Userkey is the one entered
         const short passKey = 1645;
         short userKey;

        cout << "Enter Passkey: ";
        cin >> userKey;
        if(userKey == passKey) {
            short sector;
            bool isUserAdmin = true;

            cout << endl << "Welcome Jonathan!" << endl;
            cout << "Choose sector: ";
            cin >> sector;
            if (sector == 1) {
                sector1(isUserAdmin);
            }
        }
    } else if (user == normalUser) {
        //Passkey is the correct key, Userkey is the one entered
        const short passKey = 7594;
        short userKey;

        cout << "Enter Passkey: ";
        cin >> userKey;
        if(userKey == passKey) {
            short sector;

            cout << endl << "Welcome Sebastion!" << endl;
            cout << "Choose sector: ";
            cin >> sector;
            if (sector == 1) {
                sector1(isUserAdmin);
            }
        }
    } else if (user == guest) {
        short sector;
        cout << "Welcome user, actions will be limited without an account";
        cout << endl << "Choose sector: ";
        cin >> sector;
        if (sector == 1) {
                sector1(isUserAdmin);
            }
    } else {
        cout << "User not found";
    }
    return 0;
}