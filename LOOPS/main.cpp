#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27

void main()
{
	setlocale(LC_ALL, "rus");
	/*/int i = 0;  // ������� ������
	int n;      // ���������� ��������
	cout << "������� ���������� ��������:"; cin >> n;
	while (i<n)
	{
		cout<< i++ << "Helo World\n";
		//i++;
	}*/

	/*int n;
	cout << "������� ��������� ��������:"; cin >> n;
	while (n--)
	{
		cout << n << " Helo World\n";
	}*/

	/*char key;  // "��� ���������� ����� ������� ��� �������
	do
	{
		key = _getch();  //������� _getch() ������� ������� ������� 
		//� ���������� ASCII-��� ������� �������
		//������� _getch ��������� � ���������� conio.h
		cout << (int)key << "\t" << key << endl;
		// (int)key-����� �������������� ���������� key � ��� ������
		//��� ���� ����� ������� ASCII-��� �������.
	} while (key != Escape);
	*/
	do
	{
	char key;
	key = _getch();
	cout << (int)key << "\t" << key << endl;
	} while (true);
}
