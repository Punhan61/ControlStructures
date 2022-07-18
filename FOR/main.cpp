
#include<iostream>
#include<conio.h>
using namespace std;
//#define Number_Factorial
//#define Exponentiation
void main()
{
	setlocale(LC_ALL, "rus");

	/*for (;;)
	 {
		cout << "Helo";
	}
	*/

	/*int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;*/

	//Home Work

#ifdef Number_Factorial
	int a = 1;
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a = a * i;
	}
	cout << "Факториал числа= " << a;
#endif // Number_Factorial

#ifdef Exponentiation
	int a;
	int n;
	int N = 1;
	cout << "Введите число: "; cin >> a;
	cout << "Введите степень числа: "; cin >> n;
	for (int i = 0;i < n;i++)
	{
		N *= a;
	}
	cout << N;
#endif // Exponentiation
	


}

