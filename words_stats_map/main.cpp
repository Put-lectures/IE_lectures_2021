#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
bool th_100(const pair<string, int> &arg)
{
    return arg.second > 100;
}

struct threshold
{
    int th_;
    bool operator()(const pair<string, int> &arg) { return arg.second > th_; }
};
int main()
{
    map<string, int> words;

    //    words["the"] = 4;
    //    words["apple"] = 1;

    fstream file("/home/piotr/license.txt");
    while (!file.eof()) {
        string word;
        file >> word;
        cout << word;

        words[word]++;
    }

    for (auto &el : words) {
        cout << el.first << " - " << el.second << endl;
    }

    threshold th;
    th.th_ = 90;
    int thresh = 100;
    cout << "100 occurences for: "
         << count_if(words.begin(), words.end(), [thresh](const pair<string, int> &arg) {
                return arg.second > thresh;
            });

    vector<pair<string, int>> words_tab(words.begin(), words.end());
    /*copy_if(words.begin(),
            words.end(),
            back_inserter(words_tab),
            [thresh](const pair<string, */int> &arg)
    {
        return arg.second > thresh;
    });

    sort(words_tab.begin(),
         words_tab.end(),
         [](const pair<string, int> &a, const pair<string, int> &b) { return a.second < b.second; });
    for (auto &el : words_tab) {
        cout << el.first << " - " << el.second << endl;
    }
    return 0;
}
