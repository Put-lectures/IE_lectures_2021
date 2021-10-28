#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    //    int result = 1;
    int N = 7;
    //    while (1) {
    //        result = 1;
    //        cout << "Enter n";

    //        cin >> N;

    //        if (N >= 0) {
    //            if (N > 0) {
    //                for (int i = 1; i <= N; i++) {
    //                    result *= i;
    //                }
    //            } else {
    //                result = 1;
    //            }
    //            cout << result;
    //        }
    //    }

    //Taylor series
    //    double result = 0;
    //    double x = 1, factorial = 1;
    //    for (int i = 0; i < N; i++) {
    //        factorial *= i;
    //        if (i == 0)
    //            factorial = 1;
    //        result += pow(x, i) / factorial;
    //    }
    //    cout << result;

    //    int tab[] = {5, 8, 1, -10, 18, 3};
    //    int element2find;
    //    bool was_found = false;
    //    cin >> element2find;
    //    for (int i = 0; i < 6; i++) {
    //        //        cout << tab[i] << endl;
    //        if (tab[i] == element2find) {
    //            cout << "element was found at index" << i;
    //            was_found = true;
    //            break;
    //        }
    //    }
    //    if (was_found) {
    //        cout << "element exists";
    //    } else {
    //        cout << "there is no  element in the set";
    //    }

    int tab[] = {-10, 1, 3, 5, 8, 18};
    int element2find = 100;
    int start_idx = 0, end_idx = 5;

    while (start_idx <= end_idx) {
        int mid_idx = (start_idx + end_idx) / 2;
        if (tab[mid_idx] == element2find) {
            cout << "element was found";
            break;
        } else {
            if (tab[mid_idx] > element2find) {
                end_idx = mid_idx - 1;
            } else {
                start_idx = mid_idx + 1;
            }
        }
    }

    return 0;
}
