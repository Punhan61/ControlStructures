//ControlStructures
#include<iostream>
using namespace std;

//#define ZADACHA_1_WEATHER
//#define ZADAHCA_2_SHOT
//#define ZADACHA_3_CALC
void main()
{
	setlocale(LC_ALL, "rus");

#ifdef ZADACHA_1_WEATHER
	int temperatura;
	cout << "Введите температуру:"; cin >> temperatura;
	//cout << endl;

	if (temperatura >= 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // ZADACHA_1_WEATHER

#ifdef ZADAHCA_2_SHOT
	int shot;
	cout << "Произведите выстрел с помощью чисел:"; cin >> shot;
	cout << endl;

	if (shot >= 0 && shot <= 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}


#endif // ZADAHCA_2_SHOT

#ifdef ZADACHA_3_CALC
	double a, b;	//Числа, вводимые с клавиатуры
	char s;	//Sign - знак операции
	cout << "Введите арифметическое выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: no operation" << endl;
	}

#endif // ZADACHA_3_CALC

}