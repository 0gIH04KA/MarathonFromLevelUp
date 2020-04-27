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

	for (int  i = 0; i < sizeArray; i++)
	{
		switch (i)
		{
			case 0:
			{
				inTab = ((sizeArray * 2) - 2);

				Print(myArray[i], inTab);

				break;
			}

			case 1:
			{
				inTab = ((sizeArray * 2) - 4);

				Print(myArray[i], inTab, i);

				break;
			}

			case 2:
			{
				inTab = (sizeArray * 2 - 6);

				Print(myArray[i], inTab, i);

				break;
			}

			case 3:
			{
				inTab = (sizeArray * 2 - 8);

				Print(myArray[i], inTab, i);

				break;
			}

			case 4:
			{
				inTab = (sizeArray * 2 - 10);

				Print(myArray[i], inTab, i);

				break;
			}

			case 5:
			{
				inTab = (sizeArray * 2 - 12);

				Print(myArray[i], inTab, i);

				break;
			}

			case 6:
			{
				PrinT(myArray[i], i);

				break;
			}

		}
	}

	for (int i = sizeArray; i >= 0; i--)
	{
		switch (i)
		{
			case 0:
			{
				inTab = (sizeArray * 2 - 2);

				Print(myArray[i], inTab);

				break;
			}

			case 1:
			{
				inTab = (sizeArray * 2 - 4);

				Print(myArray[i], inTab, i);

				break;
			}

			case 2:
			{
				inTab = (sizeArray * 2 - 6);

				Print(myArray[i], inTab, i);

				break;
			}

			case 3:
			{
				inTab = (sizeArray * 2 - 8);

				Print(myArray[i], inTab, i);

				break;
			}

			case 4:
			{
				inTab = (sizeArray * 2 - 10);

				Print(myArray[i], inTab, i);

				break;
			}

			case 5:
			{
				inTab = (sizeArray * 2 - 12);

				Print(myArray[i], inTab, i);

				break;
			}

		}
	}

}