#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int x;
    int y;
    int c;
    cout << "Введите 1 часть диапозона: ";
    cin >> x;
    cout << "Введите 2 часть диапозона: ";
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
    cout << "\n\nВсе парные числа : ";
    for (int i = x; i < y; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n\nВсе не парные числа : ";
    for (int i = x; i < y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n\nВсе числа крытные 7 : ";
    for (int i = x; i < y; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }
}
