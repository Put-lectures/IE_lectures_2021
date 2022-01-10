#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool greather_3_th(double el)
{
    //    if (el > 3)
    //        return true;
    //    else
    //        return false;
    return el > 3;
}
int main()
{
    vector<double> tab = {1, 5, 3, -10, 1, 2, 4, 0};
    sort(tab.begin(), tab.end());

    for (auto &el : tab) {
        cout << el << endl;
    }
    cout << "count of '1':" << count(tab.begin(), tab.end(), 1.0);
    cout << "count of > 3:" << count_if(tab.begin(), tab.end(), greather_3_th);
    //    int counter = 0;
    //    for (auto &el : tab) {
    //        if (el == 1.0)
    //            counter++;
    //    }

    return 0;
}
