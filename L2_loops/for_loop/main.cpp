#include <fstream>
#include <iostream>
#define ARRAY_SIZE 5
using namespace std;

int main()
{
    //    For loop demo
    double array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i += 1) {
        cout << "Enter an element # " << i << endl;
        cin >> array[i];
    }
    //mean value
    double acc = 0;
    for (int i = 0; i < ARRAY_SIZE; i += 1) {
        acc += array[i];
        cout << array[i] << " ";
    }

    cout << acc / ARRAY_SIZE;

    //while loop demo
    fstream file("./data.txt", ios::in);

    while (!file.eof()) {
        int val;
        file >> val;
        cout << val << " ";
    }
    //do while demo
    char answer;
    do {
        cout << "Do you want to continue (y/n)";
        cin >> answer;

    } while (!(answer == 'y' || answer == 'n'));
    //answer != 'y' &&answer != 'n'

    if (answer == 'y') {
        cout << "good bye";
    }

    //Numerical errors
    float time = 0, dt = 0.1;

    for (int i = 0; i < 1000000; i++) {
        time += dt;
    }
    cout << time;

    return 0;
}
