/*������� ������ "����� ��������, �������", �����������
�� �������. ��������������. ������, ����� �� ����� �� ������� - �� ����.
����� � ��������� ��������� � ��������� �����. ����� �������� ����� � ��������� �� */

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

    cout << "������ ��������� �� ����������: ";
    for (string nums : numbers) {
        cout << "\n" << nums << " " << endl;
    }
    cout << endl;


    cout << "������ ��������� �����: ";
    numbers_sort(numbers);

    return 0;
} 