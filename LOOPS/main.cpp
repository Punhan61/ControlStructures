#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27

void main()
{
	setlocale(LC_ALL, "rus");
	/*/int i = 0;  // счетчик циклов
	int n;      // Количество итераций
	cout << "Введите количество итераций:"; cin >> n;
	while (i<n)
	{
		cout<< i++ << "Helo World\n";
		//i++;
	}*/

	/*int n;
	cout << "введите количетво итераций:"; cin >> n;
	while (n--)
	{
		cout << n << " Helo World\n";
	}*/

	/*char key;  // "эта переменная будет хранить код клавиши
	do
	{
		key = _getch();  //функция _getch() ожидает нажатие клавиши 
		//и возвращает ASCII-код нажатой клавиши
		//Функция _getch объявлена в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		// (int)key-явное преобразование переменной key в тип данных
		//для того чтобы увидеть ASCII-код клавиши.
	} while (key != Escape);
	*/
	do
	{
	char key;
	key = _getch();
	cout << (int)key << "\t" << key << endl;
	} while (true);
}
