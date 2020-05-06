#include <iostream>
#include <cmath>

using namespace std;

#pragma region ---===   Function   ===---

bool IsLeap(short year)   //https://en.wikipedia.org/wiki/Leap_year
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

#pragma endregion

int main()
{
#pragma region ---===   Location   ===---

    setlocale(LC_ALL, "Rus");

#pragma endregion

#pragma region ---===   Input   ===---

    short  year;
    cout << "Введите год: ";
    cin >> year;

#pragma endregion

#pragma region ---===   Calculation   ===---

    string result;

    if (IsLeap(year))
    {
        result += " - Этот год високосный";
    }
    else
    {
        result += " - Этот год НЕ високосный";
    }

#pragma endregion

#pragma region ---===   Output   ===---

    cout << year << result << endl;

#pragma endregion
}