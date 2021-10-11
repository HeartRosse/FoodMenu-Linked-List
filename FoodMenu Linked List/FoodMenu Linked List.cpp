#include <iostream>
#include <string>
#include "Product.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    list list;
    list.push_back("Пицца");
    list.push_back("Гамбургер");
    list.push_back("Картошка-Фри");
    list.push_back("Пончик");
    list.push_back("Шаурма");
    list.push_back("Кока-Кола");
    list.push_back("Пепси");
    list.push_back("Наггетсы");
    list.push_back("Чизбургер");
    static bool Exit = true;
    int sum, count;
    cout << "Добро пожаловать" << "\n\n";
    int choice;
    sum = 0;
    count = 0;
    cout << "В наличии:\n";
    list.print();
    print_product_price();
    cout << "\n\n";
    cout << "Чтобы купить что-нибудь, нажмите на соответствующую кнопку: \n1.Пицца \n2.Гамбургер \n3.Картошка-Фри \n4.Пончик \n5.Шаурма\n6.Кока-Кола\n7.Пепси\n8.Наггетсы\n9.Чизбургер\n10.Показать меню\n11.Узнать счёт\n0.Выход" << "\n";

    while (Exit) {
        cout << "\n";
        cin >> choice;
        cin.ignore(32767, '\n');
        switch (choice)
        {
        case 1:
            cout << "\n";
            cout << "Вы выбрали пиццу\n";
            sum += 85;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 2:
            cout << "\n";
            cout << "Вы выбрали гамбургер\n";
            sum += 50;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 3:
            cout << "\n";
            cout << "Вы выбрали картошку-фру\n";
            sum += 65;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 4:
            cout << "\n";
            cout << "Вы выбрали пончик\n";
            sum += 40;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 5:
            cout << "\n";
            cout << "Вы выбрали шаурму\n";
            sum += 75;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 6:
            cout << "\n";
            cout << "Вы выбрали кока-колу\n";
            sum += 55;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 7:
            cout << "\n";
            cout << "Вы выбрали пепси\n";
            sum += 55;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 8:
            cout << "\n";
            cout << "Вы выбрали наггетсы\n";
            sum += 60;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 9:
            cout << "\n";
            cout << "Вы выбрали чизбургер\n";
            sum += 55;
            cout << "Ваш текущий счет: " << sum;
            count++;
            break;
        case 10:
            system("CLS");
            cout << "Чтобы купить что-нибудь, нажмите на соответствующую кнопку: \n1.Пицца \n2.Гамбургер \n3.Картошка-Фри \n4.Пончик \n5.Шаурма\n6.Кока-Кола\n7.Пепси\n8.Наггетсы\n9.Чизбургер\n10.Показать меню\n11.Узнать счёт\n0.Выход" << "\n";
            break;
        case 11:
            system("CLS");
            cout << "Ваш текущий счет: " << sum << " рублей." << " Для того чтобы выйти в главное меню нажмите 10" << endl;
            break;
        case 0:
            Exit = false;
            break;


        default:
            cout << "Простите, но у нас такого блюда нету";
            break;
        }
    }
    system("CLS");
    cout << "Ваша финальная цена: " << sum << " рублей." << endl;
    cout << "Вы взяли: " << count << " блюд(а)." << endl;
    return 0;

}
