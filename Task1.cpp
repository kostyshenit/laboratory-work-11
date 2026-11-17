// Лабораторна робота №11 — Задача 1 (структура Date: додавання хвилин)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

struct Date {
    int hours = 0;
    int minutes = 0;
};

int main()
{
    Date start;
    int addMinutes;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter hours, minutes, and elapsed minutes: ";
    if (!(cin >> start.hours >> start.minutes >> addMinutes)) {
        start.hours = 23; start.minutes = 55; addMinutes = 1880;
        cout << start.hours << " " << start.minutes << " " << addMinutes << endl;
    }

    if (start.hours < 0 || start.hours >= 24 ||
        start.minutes < 0 || start.minutes >= 60 || addMinutes < 0) {
        cout << "Error: invalid time or negative duration." << endl;
        return 1;
    }

    int total = (start.hours * 60 + start.minutes + addMinutes) % (24 * 60);
    Date result;
    result.hours = total / 60;
    result.minutes = total % 60;

    cout << result.hours << ":" << result.minutes << endl;
    return 0;
}
