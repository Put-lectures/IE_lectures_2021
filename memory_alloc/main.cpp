#include <iostream>

using namespace std;
void array_1D()
{
    int n;
    float *ptr;
    cout << "Enter number of elements";
    cin >> n;
    ptr = new float[n];

    for (int i = 0; i < n; i++) {
        cout << "enter the element #" << i + 1 << ": ";
        cin >> ptr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << ptr[i] << ", ";
    }
    delete[] ptr;
}
int main()
{
    int N, M;
    cin >> N >> M;
    float **array_2d = new float *[N];
    for (int i = 0; i < N; i++) {
        float *ptr = new float[M];
        array_2d[i] = ptr;
    }

    array_2d[0][1] = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            array_2d[i][j] = 0;
        }

    //dealocate memory
    for (int i = 0; i < N; i++) {
        delete[] array_2d[i];
    }
    delete[] array_2d;
}
