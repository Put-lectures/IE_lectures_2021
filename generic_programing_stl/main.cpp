#include <iostream>
#include <list>
#include <vector>
using namespace std;

float min(float *array, int n)
{
    float tmp = array[0];
    for (int i = 1; i < n; i++) {
        if (tmp > array[i])
            tmp = array[i];
    }
    return tmp;
}

int min(int *array, int n)
{
    int tmp = array[0];
    for (int i = 1; i < n; i++) {
        if (tmp > array[i])
            tmp = array[i];
    }
    return tmp;
}

struct product
{
    string name;
    int price;
};

int main()
{
    list<int> array;
    int n = 4;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "enter value: ";
        int el;
        cin >> el;
        array.emplace_back(el);
        //        cout << i << ", size: " << array.size() << ", capcacity: " << array.capacity() << Endl;
    }

    for (auto itr = array.begin(); itr != array.end();) {
        if (*itr == 5) {
            //            itr = array.emplace(itr, -1);
            itr = array.erase(itr);

            cout << "element was inserted" << endl;
        } else {
            itr++;
        }
    }

    for (auto &element : array) {
        cout << element;
    }

    return 0;
}
