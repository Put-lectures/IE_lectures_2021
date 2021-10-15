#include <cstring>

#include <iostream>
#define pi 3.141597
using namespace std;

int main()
{
    cout << "are you sure to exit (y/n)";
    char a;
    cin >> a;

    //    if (a == 'y' || a == 'Y') {
    //        cout << "Good bye";
    //    } else {
    //        if (a == 'n' || a == 'N')
    //            cout << "continue";
    //        else {
    //            cout << "wrong answer";
    //        }
    //    }
    switch (a) {
    case 'y':
    case 'Y':
        cout << "Good bye";
        break;
    case 'n':
    case 'N':
        cout << "continue";
        break;
    default:
        cout << "wrong answer";
    }

    return 0;
}
