#include <iostream>
#include <string>
#include "Product.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    list list;
    list.push_back("�����");
    list.push_back("���������");
    list.push_back("��������-���");
    list.push_back("������");
    list.push_back("������");
    list.push_back("����-����");
    list.push_back("�����");
    list.push_back("��������");
    list.push_back("���������");
    static bool Exit = true;
    int sum, count;
    cout << "����� ����������" << "\n\n";
    int choice;
    sum = 0;
    count = 0;
    cout << "� �������:\n";
    list.print();
    print_product_price();
    cout << "\n\n";
    cout << "����� ������ ���-������, ������� �� ��������������� ������: \n1.����� \n2.��������� \n3.��������-��� \n4.������ \n5.������\n6.����-����\n7.�����\n8.��������\n9.���������\n10.�������� ����\n11.������ ����\n0.�����" << "\n";

    while (Exit) {
        cout << "\n";
        cin >> choice;
        cin.ignore(32767, '\n');
        switch (choice)
        {
        case 1:
            cout << "\n";
            cout << "�� ������� �����\n";
            sum += 85;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 2:
            cout << "\n";
            cout << "�� ������� ���������\n";
            sum += 50;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 3:
            cout << "\n";
            cout << "�� ������� ��������-���\n";
            sum += 65;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 4:
            cout << "\n";
            cout << "�� ������� ������\n";
            sum += 40;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 5:
            cout << "\n";
            cout << "�� ������� ������\n";
            sum += 75;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 6:
            cout << "\n";
            cout << "�� ������� ����-����\n";
            sum += 55;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 7:
            cout << "\n";
            cout << "�� ������� �����\n";
            sum += 55;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 8:
            cout << "\n";
            cout << "�� ������� ��������\n";
            sum += 60;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 9:
            cout << "\n";
            cout << "�� ������� ���������\n";
            sum += 55;
            cout << "��� ������� ����: " << sum;
            count++;
            break;
        case 10:
            system("CLS");
            cout << "����� ������ ���-������, ������� �� ��������������� ������: \n1.����� \n2.��������� \n3.��������-��� \n4.������ \n5.������\n6.����-����\n7.�����\n8.��������\n9.���������\n10.�������� ����\n11.������ ����\n0.�����" << "\n";
            break;
        case 11:
            system("CLS");
            cout << "��� ������� ����: " << sum << " ������." << " ��� ���� ����� ����� � ������� ���� ������� 10" << endl;
            break;
        case 0:
            Exit = false;
            break;


        default:
            cout << "��������, �� � ��� ������ ����� ����";
            break;
        }
    }
    system("CLS");
    cout << "���� ��������� ����: " << sum << " ������." << endl;
    cout << "�� �����: " << count << " ����(�)." << endl;
    return 0;

}
