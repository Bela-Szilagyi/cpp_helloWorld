#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    /* OR
    getline(cin, name);
    if (name.empty()) cout << "Hello, World!" << endl;
    else cout << "Hello " << name << "!" << endl;
    */
    return 0;
}