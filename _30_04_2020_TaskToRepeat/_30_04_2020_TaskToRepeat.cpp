#include <iostream>
#include <string>

using namespace std;

/*
    Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня.
    Вывести на экран текущее время в часах, минутах и секундах.
    Посчитать, сколько часов, минут и секунд осталось до полуночи.
*/

int main()
{
    #pragma region ---===   Location   ===---

        setlocale(LC_ALL, "Rus");

    #pragma endregion

    #pragma region ---===   Constant   ===---

        const int secondsInMinute = 60;
        const int minutesPerHour = 60;
        const int hoursInDay = 24;

        const int secondsInDay = hoursInDay * minutesPerHour * secondsInMinute;

    #pragma endregion

    #pragma region ---===   Input   ===---

        int valueSec;
        cout << "Введите время в секундах, прошедшее с начала дня: ";
        cin >> valueSec;

    #pragma endregion

    #pragma region ---===   Calculation   ===---

        int currentHour = valueSec % secondsInDay / (minutesPerHour * secondsInMinute);
        int currentMinute = valueSec / minutesPerHour % minutesPerHour;
        int currentSecond = valueSec % secondsInMinute;

        int temp = currentHour * (minutesPerHour * secondsInMinute) + currentMinute * secondsInMinute + currentSecond;
        temp = secondsInDay - temp;

        int endHour = temp / (minutesPerHour * secondsInMinute);
        int endMinute = temp / secondsInMinute - endHour * minutesPerHour;
        int endSecond = temp - endMinute * secondsInMinute - endHour * (minutesPerHour * secondsInMinute);

    #pragma endregion

    #pragma region ---===   Output   ===---

        cout << "Текущее время: " << currentHour << " часов: " << currentMinute << " минут: " << currentSecond << " секунд" << endl;

        cout << "Время до полуночи: " << endHour << " часов: " << endMinute << " минут: " << endSecond << " секунд" << endl;

    #pragma endregion

}