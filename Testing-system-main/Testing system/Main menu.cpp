#include <iostream>
#include <iomanip>
#include "student.h"
#include "prepod.h"
using namespace std;

void printMenu() {
    string line = "";
    for (int i = 0; i < 50; i++) {
        line += "-";
    }
    cout << " +" << line << "+" << endl;
    cout << " |" << "                 ГЛАВНОЕ МЕНЮ                 " << "    |" << endl;
    cout << " +" << line << "+" << endl;
    cout << " | 1. Режим студента                                |" << endl;
    cout << " | 2. Режим преподавателя                           |" << endl;
    cout << " | 3. Справка                                       |" << endl;
    cout << " | 0. Выход                                         |" << endl;
    cout << " +" << line << "+" << endl;
    cout << "  Ваш выбор: ";
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    int c;
    bool quit = false;
    do {
        printMenu();
        cin >> c;
        switch (c) {
        case 0:
            quit = true;
            break;
        case 1:
            student_login();
            break;
        case 2:
            prepod_login();
            break;
        case 3:
            cout << "                            СПРАВКА                        " << endl;
            cout << " Режим студента позволяет просматривать и управлять своей информацией." << endl;
            cout << " Режим преподавателя позволяет управлять информацией о студентах." << endl;
            cout << " Справка содержит дополнительную информацию о работе программы.\n" << endl;
            break;
        default:
            cout << " Введено некорректное значение. Пожалуйста, попробуйте снова." << endl;
            break;
        }
    } while (!quit);
    return 0;
}
