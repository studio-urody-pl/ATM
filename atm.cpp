#include <iostream>

using namespace std;

string PIN;

int main() {
    cout << "Welcome to ur bank" << endl;
    cout << "Please enter PIN number: ";
    cin >> PIN;

    if (PIN=="1729")
    {
        cout<<"PIN number is correct";
    }
    else
    {
        cout<<"PIN number is incorrect";
    }

    return 0;
}
