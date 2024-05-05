/*Создать список "номер телефона, фамилия", сортировать
по фамилии. Самостоятельно. Искать, какой бы либой то сделать - не надо.
Фишка в написании структуры и алгоритма самим. Можно рисовать схемы и присылать их */

#include <iostream>
#include <list>
using namespace std;

void numbers_sort(list <string> numbers) {
    numbers.sort();

    for (string nums : numbers) {
        cout << "\n" << nums << " " << endl;
    }
}


int main(){
    setlocale(LC_ALL, "ru");
 
    list <string> numbers = { "Terentyev - +71233211221", "Semenov - +71233215555", "Ivanov - +71233219999"};

    cout << "Список телефонов до сортировки: ";
    for (string nums : numbers) {
        cout << "\n" << nums << " " << endl;
    }
    cout << endl;


    cout << "Список телефонов после: ";
    numbers_sort(numbers);

    return 0;
} 