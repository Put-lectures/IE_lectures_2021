#include <iostream>

using namespace std;
int factorial(int n)
{
    //    if (n == 0)
    //        return 1;
    cout << n << endl;
    return n * factorial(n - 1);
}
int main()
{
    int f = factorial(5);
    cout << f << endl;
    //    for (int i = 5; i > -300000; i--) {
    //        cout << i << endl;
    //    }
    return 0;
}
