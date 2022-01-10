#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
void csv_write()
{
    fstream file("sinus.csv", ios::out);
    for (int i = 0; i < 100; i++) {
        float y = sin(2 * M_PI * i / 10.0);
        file << i << "; " << y << endl;
    }
    file.close();
}
int main()
{
    fstream file("sinus.csv", ios::in);
    int i;
    float y;
    while (!file.eof()) {
        string line;
        if (getline(file, line)) {
            stringstream str(line);
            string element;
            getline(str, element, ';');
            i = stoi(element);
            getline(str, element, ';');
            y = stof(element);
            //            cout << line << endl;
            cout << i << "-" << y << endl;
        }
        //        file >> i >> delim >> y;
        //        cout << i << "-" << y << endl;
    }

    return 0;
}
