#include "functions.h"
#include <cmath>
#include <iostream>

using namespace std;

void bar()
{
    foo();
}
void foo()
{
    bar();
}

int main(int argc, char *argv[])
{
    float *tab = nullptr;
    int n = 0;
    char choice;
    do {
        choice = menu();

        switch (choice) {
        case '1': {
            pi();
            break;
        }
        case '2': {
            if (tab != nullptr)
                delete[] tab;
            tab = get_array(n);
            break;
        }
        case '3': {
            statistics(tab, n);
            break;
        }
        default: {
            //            cin >> n;
            //            for (int i = 0; i < n; i++)
            //                cin >> tab[i];
            //            break;
            break;
        }
        } //switch
    } while (choice != '6');
    if (tab != nullptr)
        delete[] tab;
    system("pause");
    return 0;
}
