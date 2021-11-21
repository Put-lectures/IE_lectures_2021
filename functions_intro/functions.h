#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <cmath>
#include <iostream>
void foo();
char menu();
void pi();
double calculate_pi(int n = 1000);
void statistics(float *array, int size);
float *get_array(int &n);
void calculate_statics(float *array, int size, float &min, float &max, float &mean);

#endif // FUNCTIONS_H
