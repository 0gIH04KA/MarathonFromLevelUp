#include <iostream>		

using namespace std;

#pragma region ---===   Const   ===---

const char TAB = '\t';

#pragma endregion

#pragma region ---===   Function   ===---

void Print(string str, int countInTab = 0, int countOutTab = 0)
{
	string inTab(countInTab, TAB);
	string outTab(countOutTab, TAB);

	cout << outTab << str << inTab << str << endl;
}

void PrinT(string str, int countOutTab = 0)
{
	string outTab(countOutTab, TAB);

	cout << outTab << str << endl;
}

#pragma endregion

void main()	
{
	setlocale(LC_ALL, "rus"); // локализаци€
	
	//" аждый охотник желает знать, где сидит фазан"
	string myArray[] = { " аждый", "охотник", "желает", "знать", "где", "сидит", "фазан" };
	
	int sizeArray = sizeof(myArray) / sizeof(myArray[0]);

	int inTab;
	int outTab;

	for (int i = 0; i < sizeArray; i++)
	{
		if (i == 0)
		{
			inTab = (sizeArray - 1);

			Print(myArray[i], inTab);
		}

		if (i == 1)
		{
			inTab = (sizeArray - 3);

			Print(myArray[i], inTab, 1);
		}

		if (i == 2)
		{
			Print(myArray[i], i, i);
		}

		if (i == 3)
		{
			PrinT(myArray[i], i);
		}

		if (i == 4)
		{
			inTab = outTab = i / 2;

			Print(myArray[i], inTab, outTab);
		}

		if (i == 5)
		{
			inTab = (sizeArray - 3);

			Print(myArray[i], inTab, 1);
		}

		if (i == 6)
		{
			inTab = (sizeArray - 1);

			Print(myArray[i], inTab);
		}

	}
}