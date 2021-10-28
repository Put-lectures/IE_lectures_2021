#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "enter a,b values";
    cin >> a >> b;
    if (b > a) {
        cout << "wrong input";
        return -1;
    }

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    cout << "GCD is " << a;
    return 0;
}
