#include <iostream>
#include <cmath>

using namespace std;

	#pragma region ---===   Function   ===---

	int CalculationTime(double time)
	{
		int sec = (time - int(time)) * 100;
		int min = int(time) * 60;

		return min + sec;
	}

	double CalculationSpeed(double distance, double time)
	{
		return ((distance / time) * 3.6);
	}

	#pragma endregion

int main()
{
	#pragma region ---===   Location   ===---

	setlocale(LC_ALL, "Rus");

	#pragma endregion

	cout << "\t\tВычисление скорости бега\n" << endl;

	#pragma region ---===   Input   ===---

		double distance;
		cout << "Введите длину дистанции (м): ";
		cin >> distance;

		double time;
		cout << "Введите время (мин.сек): ";
		cin >> time;

	#pragma endregion

	#pragma region ---===   Calculation   ===---

		time = CalculationTime(time);

		double speed = CalculationSpeed(distance, time);

	#pragma endregion

	#pragma region ---===   Output   ===---

		cout << "\n\tДистанция: " << distance << endl;

		cout << "\tВремя: " << time << " sec \n" << endl;

		printf("Вы бежали со скоростью: %.2f км/ч\n", speed);

	#pragma endregion
}
