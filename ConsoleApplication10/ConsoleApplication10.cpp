#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int x;
    int y;
    int c;
    cout << "������� 1 ����� ���������: ";
    cin >> x;
    cout << "������� 2 ����� ���������: ";
    cin >> y;
    if (y < x)
    {
        c = y;
        y = x;
        x = c;
    }
    else
    {
        x = x;
        y = y;
    }
    cout << "\n\n��� ������ ����� : ";
    for (int i = x; i < y; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n\n��� �� ������ ����� : ";
    for (int i = x; i < y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n\n��� ����� ������� 7 : ";
    for (int i = x; i < y; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }
}
