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
	cout << "������� �����������:"; cin >> temperatura;
	//cout << endl;

	if (temperatura >= 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // ZADACHA_1_WEATHER

#ifdef ZADAHCA_2_SHOT
	int shot;
	cout << "����������� ������� � ������� �����:"; cin >> shot;
	cout << endl;

	if (shot >= 0 && shot <= 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}


#endif // ZADAHCA_2_SHOT

#ifdef ZADACHA_3_CALC
	double a, b;	//�����, �������� � ����������
	char s;	//Sign - ���� ��������
	cout << "������� �������������� ���������: ";
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