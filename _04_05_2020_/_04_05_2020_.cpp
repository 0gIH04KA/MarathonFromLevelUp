#include <iostream>
#include <cmath>

using namespace std;

#pragma region ---===   Constant   ===---

const double lowPercent = 0.03;
const double mediumPercent = 0.05;
const double highPercent = 0.08;

#pragma endregion

#pragma region ---===   Function   ===---

double CalculationSalary(int salary, int sales)
{
    double result;

    if (sales <= 500)
    {
        result = salary + (lowPercent * sales);
    }
    else
    {
        if (sales > 500 || sales <= 1000)
        {
            result = salary + (mediumPercent * sales);
        }
        else
        {
            result = salary + (highPercent * sales);
        }
    }

    return result;
}
#pragma endregion


int main()
{
#pragma region ---===   Location   ===---

    setlocale(LC_ALL, "Rus");

#pragma endregion

#pragma region ---===   Input   ===---

    double firstManagerSalary;
    cout << "Введите зарплату 1 менеджера: ";
    cin >> firstManagerSalary;

    double firstManager;
    cout << "Введите уровень продаж 1 менеджера: ";
    cin >> firstManager;


    double secondManagerSalary;
    cout << "Введите зарплату 2 менеджера: ";
    cin >> secondManagerSalary;

    double secondManager;
    cout << "Введите уровень продаж 2 менеджера: ";
    cin >> secondManager;


    double thirdManagerSalary;
    cout << "Введите зарплату 3 менеджера: ";
    cin >> thirdManagerSalary;

    double thirdManager;
    cout << "Введите уровень продаж 3 менеджера: ";
    cin >> thirdManager;

#pragma endregion

#pragma region ---===   Calculation   ===---

    firstManager = CalculationSalary(firstManagerSalary, firstManager);
    secondManager = CalculationSalary(secondManagerSalary, secondManager);
    thirdManager = CalculationSalary(thirdManagerSalary, thirdManager);

#pragma endregion

#pragma region ---===   Output   ===---

    cout << "Первый менеджер заработал " << firstManager << endl;
    cout << "Второй менеджер заработал " << secondManager << endl;
    cout << "Третий менеджер заработал " << thirdManager << endl;

#pragma endregion
}