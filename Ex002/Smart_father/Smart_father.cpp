// Smart_father.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");

    int x;
    int s = 0;
    string str;

    while (true) {
        cout << "x= ";
        cin >> x;
        if ((x != 10) && (x != 5)) {
            if (x == 0) break;
            cout << "error" << endl;
            continue;
        }

        if (s == 0) {
            if (x == 10) {
                str = "Жду ввода монет (ещё 10): ";
                s = 1;
            }
            else {
                str = "Жду ввода монет (ещё 15): ";
                s = 2;
            }
        }
        else if (s == 1) {
            if (x == 10) {
                str = "Выдача бутылки воды";
                s = 0;
            }
            else {
                str = "Жду ввода монет (ещё 5): ";
                s = 3;
            }
        }
        else if (s == 2) {
            if (x == 10) {
                str = "Жду ввода монет (ещё 5): ";
                s = 3;
            }
            else {
                str = "Жду ввода монет (ещё 10): ";
                s = 1;
            }
        }
        else if (s == 3) {
            if (x == 10) {
                str = "Выдача бутылки воды и сдачи - 5 руб";
                s = 0;
            }
            else {
                str = "Выдача бутылки воды";
                s = 0;
            }
        }
        cout << str << endl;
    }
}
void test() {
    int x;
    int s = 3;
    string str;

    while (true) {
        cout << "x= ";
        cin >> x;
        if ((x != 2) && (x != 5)) {
            cout << "error" << endl;
            continue;
        }

        if (s == 3) {
            if (x == 2) s = 2;
            else s = 4;
        }
        else if (s == 2) {
            if (x == 2) s = 1;
            else s = 3;
        }
        else if ((s == 1) || (s == 0)) {
            if (x == 2) s = 0;

            else s = 3;
        }
        else if ((s == 4) || (s == 5)) {
            if (x == 2) s = 2;
            else s = 5;
        }

        switch (s) {
        case 0: str = "Наказываем"; break;
        case 1: str = "Разочаровываемся"; break;
        case 2: str = "Успокаиваемся"; break;
        case 3: str = "Надеемся"; break;
        case 4: str = "Радуемся"; break;
        case 5: str = "Награждаем"; break;
        }
        cout << str << endl;
    }
}
