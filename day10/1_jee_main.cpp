
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string name, dob, state;

    cout << "===== JEE MAIN REGISTRATION =====\n\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your Date of Birth (DD/MM/YYYY): ";
    getline(cin, dob);

    cout << "Enter your state: ";
    getline(cin, state);

    char nameInitial = toupper(name[0]);
    char stateInitial = toupper(state[0]);

    
    string year = dob.substr(dob.length() - 4);

    srand(time(0));
    int randomNum = 1000 + rand() % 9000;

    string regNumber = "";
    regNumber += nameInitial;
    regNumber += stateInitial;
    regNumber += year;
    regNumber += to_string(randomNum);

    cout << "\nYour JEE Main Registration Number is: " << regNumber << "\n";

    return 0;
}