#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr;

    cout << "Enter an integer: ";
    cin >> num;

    ptr = &num;

    if (*ptr % 2 == 0) {
        cout << "The number " << *ptr << " is even." << endl;
    } else {
        cout << "The number " << *ptr << " is odd." <<endl;

    }
    return 0;

}     
