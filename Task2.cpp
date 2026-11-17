// Лабораторна робота №11 — Задача 2 (структура Date: тривалість події)
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
    Date start, end;

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter start (hours minutes) and end (hours minutes): ";
    if (!(cin >> start.hours >> start.minutes >> end.hours >> end.minutes)) {
        start.hours = 12; start.minutes = 58;
        end.hours = 13; end.minutes = 3;
        cout << start.hours << " " << start.minutes << " "
             << end.hours << " " << end.minutes << endl;
    }

    if (start.hours < 0 || start.hours >= 24 || start.minutes < 0 || start.minutes >= 60 ||
        end.hours < 0 || end.hours >= 24 || end.minutes < 0 || end.minutes >= 60) {
        cout << "Error: invalid time values (hours 0..23, minutes 0..59)." << endl;
        return 1;
    }

    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes;

    if (endTotal < startTotal) {
        cout << "Error: end time cannot be earlier than start time." << endl;
        return 1;
    }

    int diff = endTotal - startTotal;
    Date duration;
    duration.hours = diff / 60;
    duration.minutes = diff % 60;

    cout << duration.hours << ":" << duration.minutes << endl;
    return 0;
}
