#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int age;
    char name[15];
    char sex;
    do {
        cout << "enter your name: ";
        cin.getline(name, 15);
        cout << "age: ";
        cin >> age;
        if (!cin.good()) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.sync();
        }
        cout << "gender: ";
        cin >> sex;
        cin.ignore();

    } while (age > 0);

    return 0;
}
