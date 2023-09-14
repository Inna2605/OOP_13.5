//Создайте контейнер map из 5 элементов для сохранения информации о среднем балле студентов.
//Каждый элемент этого контейнера будет содержать пару "объект класса Student" - средний балл студента.
//Найдите одного из студентов.

#include <iostream>
#include <map>
#include "Student.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Student human1("Shevchenko", 11);
    Student human2("Miller", 9);
    Student human3("Boyko", 12);
    Student human4("Bondarenko", 8);
    Student human5("Kovalenko", 10);

    map<Student, int>mapStates;
    map<Student, int>::iterator iter;
    
    mapStates[human1] = human1.getGrade();
    mapStates[human2] = human2.getGrade();
    mapStates[human3] = human3.getGrade();
    mapStates[human4] = human4.getGrade();
    mapStates[human5] = human5.getGrade();

    cout << human1 << endl
        << human2 << endl
        << human3 << endl
        << human4 << endl
        << human5 << endl;

    string Name;
    cout << "\nВведите имя студента, чтобы узнать его средний бал успеваемости: ";
    cin >> Name;

    iter = mapStates.find(Student(Name, 0)); // Передаем 0 балов в параметр, так как он не важен для поиска
    if (iter != mapStates.end()) {
        int grade = iter->second;
        cout << "\nСредний бал успеваемости студента " << Name << " - " << grade << " балов.\n\n";
    }
    else {
        cout << "\nСтудент с именем " << Name << " не найден.\n\n";
    }
}
