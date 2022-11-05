#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus"); \
	int decimal;
	cout << "¬ведите дес€тичное число: "; cin >> decimal;
	cout << decimal << endl;

	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; i++, decimal /= 16)
	{
		hex[i] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}

	for (--i; i >= 0; i--)
	{
		//cout << hex[i];

		/*switch (hex[i])
		{
		case 10:cout << "A";break;
		case 11:cout << "B";break;
		case 12:cout << "C";break;
		case 13:cout << "D";break;
		case 14:cout << "E";break;
		case 15:cout << "F";break;
		}
		*/

		//if (hex[i] < 10)cout << hex[i];	else cout << char(hex[i] + 55);
		//(hex[i] < 10) ? cout << hex[i] : cout << char(hex[i] + 55);   //тернарный оператор
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
       
		cout << hex[i];
	}
	cout << endl;
}
