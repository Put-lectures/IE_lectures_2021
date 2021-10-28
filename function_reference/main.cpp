#include <iostream>

using namespace std;
int query(char *question)
{
    cout << question;
    do {
        char answer;
        cin >> answer;
        switch (answer) {
        case 'y':
        case 'Y':
            return 1;
        case 'n':
        case 'N':
            return 0;
        }
    } while (1);
}

void do_sth(int a, int b)
{
    a = b;
}
void do_sth_ref(int &a, int &b)
{
    a = b;
}
int main()
{
    int a = 5;
    int &c = a;

    if (query("Are you ready to start?")) {
        do {
            //let start
            cout << "process" << endl;
        } while (query("Do you want to continue?"));
    }

    int x = 2, y = 5;
    do_sth(x, y);
    cout << x << " - " << y << endl;

    do_sth_ref(x, y);
    cout << x << " - " << y << endl;

    return 0;
}
