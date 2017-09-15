#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Please enter your name: ";
    char name[64];
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    return 0;
}