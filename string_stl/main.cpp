#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char text1[20], text2[20];
    cin.getline(text1, 20);
    strcpy(text2, text1);

    string stext, stext_2;
    getline(cin, stext);
    cin >> stext;

    stext = "a text";
    stext_2 = stext + "another line";

    return 0;
}
