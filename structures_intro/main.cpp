#include "utils.h"
#include <iostream>
using namespace std;

void input(sPerson *p)
{
    cout << "What is your name";
    cin.getline(p->full_name, 25);
    cout << "How old are you?";
    cin >> p->age;
    cout << "What is your gender?";
    cin >> p->sex;
    cin.ignore();
}

sPerson input()
{
    sPerson person;
    cout << "What is your name";
    cin.getline(person.full_name, 25);
    cout << "How old are you?";
    cin >> person.age;
    cout << "What is your gender?";
    cin >> person.sex;
    cin.ignore();
    return person;
}

void print(const sPerson &p)
{
    cout << p.full_name << ", age: " << p.age << ", gender:" << p.sex << endl;
}
int main()
{
    int N;
    cin >> N;
    sPerson *subjects = new sPerson[N];
    //    subjects[0].age = 5;
    for (int i = 0; i < N; i++) {
        //        subjects[i] = input();
        input(subjects + i);
    }
    for (int i = 0; i < N; i++) {
        print(subjects[i]);
    }

    //    sPerson man;

    //    sPerson *p_person;
    //    p_person = &man;

    //    (*p_person).age = 15;
    //    p_person->age = 15;
    delete[] subjects;

    return 0;
}
