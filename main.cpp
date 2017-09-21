#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Please enter your name: ";
    string name;
    cin >> name; // or getline(cin, name); ??? which one is better???
    cout << "Hello " << name << "!" << endl;
    return 0;
}