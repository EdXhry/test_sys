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
    cout << " |" << "                 ������� ����                 " << "    |" << endl;
    cout << " +" << line << "+" << endl;
    cout << " | 1. ����� ��������                                |" << endl;
    cout << " | 2. ����� �������������                           |" << endl;
    cout << " | 3. �������                                       |" << endl;
    cout << " | 0. �����                                         |" << endl;
    cout << " +" << line << "+" << endl;
    cout << "  ��� �����: ";
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
            cout << "                            �������                        " << endl;
            cout << " ����� �������� ��������� ������������� � ��������� ����� �����������." << endl;
            cout << " ����� ������������� ��������� ��������� ����������� � ���������." << endl;
            cout << " ������� �������� �������������� ���������� � ������ ���������.\n" << endl;
            break;
        default:
            cout << " ������� ������������ ��������. ����������, ���������� �����." << endl;
            break;
        }
    } while (!quit);
    return 0;
}
