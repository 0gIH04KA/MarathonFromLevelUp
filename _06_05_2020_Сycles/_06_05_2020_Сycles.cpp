#include <iostream>

using namespace std;

#pragma region ---===   Constant   ===---

const int lastTask = 10;

const char sym = '*';
const char _empty = '.';

#pragma endregion

#pragma region ---===   Function   ===---

char** Create(int row, int columns) 
{
    char** myArray = new char* [row];

    for (int i = 0; i < row; ++i) 
    {
        myArray[i] = new char[columns];
    }

    return myArray;
}

void FillingSymbol(int number, char** myArray, int rows, int columns)
{
    switch (number)
    {
        case 1:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if (row <= col)
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 2:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if (row >= col)
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 3:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if ((col >= row) 
                     && (col <= rows - row - 1))
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 4:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if ((col <= row) 
                     && (col >= rows - row - 1))
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 5:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if ((col <= row && col >= rows - row - 1)
                     || (col >= row && col <= rows - row - 1))
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 6:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if ((col >= row && col >= rows - row - 1)
                     || (col <= row && col <= rows - row - 1))
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 7:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if ((col >= row) 
                     && (col <= rows - row - 1))
                    {
                        myArray[col][row] = sym;
                    }
                    else
                    {
                        myArray[col][row] = _empty;
                    }
                }
            }

            break;
        }

        case 8:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if ((col >= row) 
                     && (col >= rows - row - 1))
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 9:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if (col <= rows - row - 1)
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }

        case 10:
        {
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < columns; col++)
                {
                    if (col >= rows - row - 1)
                    {
                        myArray[row][col] = sym;
                    }
                    else
                    {
                        myArray[row][col] = _empty;
                    }
                }
            }

            break;
        }
    }
}

void Printer(char** myArray, int rows, int columns)
{
    for (int row = 0; row < rows; ++row)
    {
        for (int col = 0; col < columns; ++col)
        {
            cout << myArray[row][col] << ' ';
        }

        cout << endl;
    }
}

int IntParse(string msg)
{
    while (true)
    {
        cout << "\nВведите " + msg + ": ";
        int number;
        cin >> number;

        if (cin.fail())                 // если предыдущее извлечение оказалось неудачным,
        {
            cin.clear();                // то возвращаем cin в 'обычный' режим работы
            cin.ignore(SHRT_MAX, '\n'); // и удаляем значения предыдущего ввода из входного буфера
        }

        if (number > 0 && number <= lastTask)
        {
            return number;
        }
        else
        {
            cout << "\nПовторите ввод!\n";
        }
    }
}

#pragma endregion

int main()
{
#pragma region ---===   Location   ===---

    setlocale(LC_ALL, "Rus");

#pragma endregion

    char exit;

    cout << "Рекоменддуемое значение ( value % 2 != 0 )";
    int size = IntParse("размерность массива");

    char** figure = Create(size, size);

    do
    {
#pragma region ---===   Input   ===---

        int value = IntParse("номер фигуры (1 - 10)");

#pragma endregion

        FillingSymbol(value, figure, size, size);

        Printer(figure, size, size);

#pragma region ---===   Output   ===---

        cout << "\nЧто бы продолжить введите любой символ\n\tДля выхода нажмите 'X' англ\n";
        cin >> exit;

#pragma endregion

    } while (exit != 'x' && exit != 'X' /* англ */);
}