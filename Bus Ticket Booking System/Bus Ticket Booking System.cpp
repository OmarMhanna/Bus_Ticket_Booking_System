#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ID1 = "137";
    string ID2 = "189";
    string ID3 = "126";
    string ID4 = "191";

    bool MainMenu;
    string LogIn;
    string UserID;
    string GuestTicket;
    int i;

    //do-while loop to execute the code at least once and repeat it if the user entered '0' to return to the main menu
    do {

        MainMenu = false;

        cout << "\n Please Choose a Log In Method (You Can Return to This Menu by Entering \'0\' Anytime)\n 1. User\n 2. Guest\n\n Choose \'1\' or \'2\': ";
        getline(cin, LogIn);

        //Case A: if the user chose '1' for user
        if (LogIn == "1") {

            cout << "\n Please Enter Your ID: ";
            getline(cin, UserID);

            if (UserID == ID1 || UserID == ID2 || UserID == ID3 || UserID == ID4) {

                cout << "\n Successful Operation\n";
                break;
            }
            else if (UserID == "0") {

                MainMenu = true;
            }
            else {

                i = 1;

                //to give the user 3 tries to enter his id before ending the program
                for (; i <= 3; i++) {

                    cout << "\n Wrong ID, Please Try Again (" << 4 - i << " Tries Left)\n";
                    cout << "\n Enter Your ID Again: ";
                    getline(cin, UserID);

                    if (UserID == ID1 || UserID == ID2 || UserID == ID3 || UserID == ID4) {

                        cout << "\n Successful Operation\n";
                        break;
                    }
                    else if (UserID == "0") {

                        MainMenu = true;
                        break;
                    }
                }

                //to print only "Wrong ID" without "Please Try Again" after failing the last try
                if (i > 3) {

                    cout << "\n Wrong ID\n";
                }
            }
        }
        //Case B: if the user chose '2' for guest
        else if (LogIn == "2") {

            cout << "\n Please Choose a Ticket\n 1. Ticket Number 1, 50 L.E.\n 2. Ticket Number 2, 30 L.E.\n 3. Ticket Number 3, 20 L.E.\n\n Choose \'1\', \'2\', or \'3\': ";
            getline(cin, GuestTicket);

            if (GuestTicket == "1" || GuestTicket == "2" || GuestTicket == "3") {

                cout << "\n Successful Operation\n";
                break;
            }
            else if (GuestTicket == "0") {

                MainMenu = true;
            }
            else {

                cout << "\n Wrong Choice\n";
                break;
            }
        }
        //Case C: if the user chose anything other than '1' or '2' (not user nor guest)
        else {

            cout << "\n Wrong Choice\n";
            break;
        }
    }
    while (MainMenu == true);
}