#include "functions.h"

using namespace std;
void foo_def(int a = 0, int b = 0, int c = 0);

void foo_def(int a, int b, int c) {}
void process()
{
    std::cout << calculate_pi(1000);
    foo_def();
    foo_def(3);
    foo_def(2, 6);
    foo_def(2, 6, 8);
    pow(4, 2);
}

char menu()
{
    cout << "1 - calculate Pi" << endl
         << "2 – get fp array" << endl
         << "3 – calculate statics" << endl
         << "4 - sorting" << endl
         << "5 – anagram" << endl
         << "6 - exit" << endl;
    char chr;

    cin >> chr;
    return chr;
}

double calculate_pi(int n)
{
    double pi = 0;
    for (int i = 0; i < n; i++)
        pi = pi + 4.0 * pow(-1, i) / (2 * i + 1);
    return pi;
}
void pi()
{
    int k;
    cout << "enter iteration count" << endl;
    cin >> k;
    double pi = calculate_pi(k);
    cout << pi << endl;
    calculate_pi();
}
void calculate_statics(float *array, int size, float &min, float &max, float &mean)
{
    min = *array;
    max = array[0];
    float sum = 0;

    for (int i = 0; i < size; i++) {
        //        sum += array[i];
        sum += *(array + 1);
        if (array[i] > max)
            max = array[i];
        if (min > array[i])
            min = array[i];
    }
    mean = sum / size;
}
void statistics(float *array, int size)
{
    float min;
    float max;
    float mean;
    calculate_statics(array, size, min, max, mean);
    cout << "Mean value  " << mean << ", minvalue: " << min << ", max value: " << max << endl;
}
float *get_array(int &n)
{
    //    int n;
    cout << "enter number of elements" << endl;
    cin >> n;
    float *array = new float[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    return array;
}
