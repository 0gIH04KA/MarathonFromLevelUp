#include <iostream>

using namespace std;

#pragma region ---===   Function   ===---

void Validation(int apptsPerHouse, int apptNumber )
{
    if (apptNumber > apptsPerHouse)
    {
        throw "Данной квартиры не существует в текущем доме!";
    }
}

int IntParse(string msg)
{
    while (true)
    {
        cout << "\nВведите " + msg + ": ";
        int number;
        cin >> number;
        
        if (cin.fail())        // если предыдущее извлечение оказалось неудачным,
        {
            cin.clear();            // то возвращаем cin в 'обычный' режим работы
            cin.ignore(SHRT_MAX, '\n');// и удаляем значения предыдущего ввода из входного буфера
        }

        if (number > 0 && number <= INT32_MAX)
        {
            return number; 
        }
        else
        {
            cout << "\nПовторите ввод!";
            cout << "\n" << msg << " не может быть меньше либо равно нулю!\n";
        }
    }
}

#pragma endregion

int main() 
{
#pragma region ---===   Location   ===---

    setlocale(LC_ALL, "Rus");

#pragma endregion

#pragma region ---===   Input   ===---

    int  apptsPerHouse = IntParse("колличество квартир в доме");        // квартир в доме
    int  porchsPerHouse = IntParse("колличество подъездов в доме");     // подъездов в доме
    int  floorsPerPorch = IntParse("колличество этажей в подъезде");    // этажей в подъезде
    int  apptNumber = IntParse("номер квартиры");                       // номер квартиры

#pragma endregion

#pragma region ---===   Validation   ===---

    try
    {
        Validation(apptsPerHouse, apptNumber);
    }
    catch (const char* msg)
    {
        cout << "\n\n" <<  msg << endl;

        return -1;
    }
    catch (exception)
    {
        cout << "Ой, что-то пошло не так :(" << endl;

        return INT32_MIN;
    }

#pragma endregion

#pragma region ---===   Calculation   ===---

    int apptsPerPorch = apptsPerHouse / porchsPerHouse; // квартир в подъезде
    int apptsPerFloor = apptsPerPorch / floorsPerPorch; // квартир на этаже
    int porchNumber = (apptNumber / apptsPerPorch) + ((apptNumber % apptsPerPorch) ? 1 : 0); // номер подъезда
    int floorNumber = (apptNumber - (apptsPerPorch * (porchNumber - 1))) / apptsPerFloor + ((apptNumber % apptsPerFloor) ? 1 : 0); // этаж

#pragma endregion

#pragma region ---===   Output   ===---

    cout << "\nКвартира: " << apptNumber << " Находится в " << porchNumber << "-м подъезде на " << floorNumber <<"-м этаже\n" ;

#pragma endregion
}