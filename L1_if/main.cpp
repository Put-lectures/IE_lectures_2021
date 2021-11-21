#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int sum_alg(int start, int stop, int step)
{
    int acc = 0;
    //    acc += tab[0];
    //    acc += tab[1];
    for (int n = start; n <= stop; n += step) {
        acc += n;
    }
}
int sum(vector<int> tab)
{
    int acc = 0;
    //    acc += tab[0];
    //    acc += tab[1];
    for (int i = 0; i < tab.size(); i++) {
        acc += tab[i];
    }
}
bool is_prime(int v)
{
    for (int div = 2; div < v; div++) {
        if (v % div == 0)
            return false;
    }
    return true;
}
int min(const vector<int> &tab)
{
    int min_v = tab[0];
    for (auto el : tab) {
        if (el < min_v) {
            min_v = el;
        }
    }
    return min_v;
}

bool is_positive_stl(const vector<int> &tab)
{
    bool is_negative = false;
    for (auto el : tab) {
        if (el <= 0)
            is_negative = true;
    }
    return !is_negative;
}

bool is_positive(const vector<int> &tab)
{
    bool is_negative = false;
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] <= 0)
            is_negative = true;
    }
    return !is_negative;
}

int silnia(int n)
{
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}
bool question(const std::string &text)
{
    while (1) {
        cout << text << "(t/n)";
        char odpowiedz;
        cin >> odpowiedz;

        switch (odpowiedz) {
        case 't':
        case 'T':
            cout << "Odpowiedziales tak";
            return 1;
            break;
        case 'n':
        case 'N':
            cout << "Odpowiedziales nie";
            return 0;
            break;
        default:
            cout << "wybrales niepoprawną odpowiedź";
        }
    }
}
double pi(double prec)
{
    double acc = 0;
    //    acc += tab[0];
    //    acc += tab[1];
    int n = 1;
    do {
        acc += 4 * pow(-1, n - 1) / (2 * n - 1);
        n++;
    } while (static_cast<double>(4) / (2 * n - 2) > prec);
    return acc;
}
bool binary_search(const vector<int> tab, int el2find)
{
    int start_idx = 0;
    int end_idx = tab.size() - 1;

    while (start_idx <= end_idx) {
        int mid = (start_idx + end_idx) / 2;
        if (tab[mid] == el2find) {
            cout << "znaleziono";
            return true;
            break;
        } else {
            if (tab[mid] > el2find)
                end_idx = mid - 1;
            else {
                start_idx = mid + 1;
            }
        }
    }
    cout << "brak elementu";
    return false;
}
void bubble_sort(vector<int> &tab)
{
    bool is_changed;
    int rozmiar = tab.size();
    do {
        rozmiar--;
        is_changed = false;
        for (int i = 0; i < rozmiar - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                int tmp = tab[i + 1];
                tab[i + 1] = tab[i];
                tab[i] = tmp;
                is_changed = true;
            }
        }
    } while (is_changed);
}
int main()
{
    //    question("czy chcesz kontynuowac");

    //    cout << silnia(12);

    //    int el2find = 26;
    //    vector<int> tab = {1, 4, 7, 9, 20, 26, 30, 100, 101};
    //    binary_search(tab, el2find);

    vector<int> tab = {1, 6, 10, 4, -6, 12};
    bubble_sort(tab);
    for (auto el : tab) {
        cout << el << endl;
    }

    return 0;
}
