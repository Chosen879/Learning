#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Admin user have acess to everything, guest users dont
    string admin = "ChosenOne";
    string normalUser = "QuietLimb";
    string guest = "guest";

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

            cout << endl << "Welcome Jonathan!" << endl;
            cout << "Choose sector: ";
            cin >> sector;
        }
    } else if (user == normalUser) {
        const short passKey = 7594;
        short userKey;

        cout << "Enter Passkey: ";
        cin >> userKey;
        if(userKey == passKey) {
            short sector;

            cout << endl << "Welcome Sebastion!" << endl;
            cout << "Choose sector: ";
            cin >> sector;
        }
    } else if (user == guest) {
        short sector;
        cout << "Welcome user, actions will be limited without an account";
        cout << endl << "Choose sector: ";
        cin >> sector;
    } else {
        cout << "User not found";
    }
    return 0;
}