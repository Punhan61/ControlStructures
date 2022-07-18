#include<iostream>
using namespace std;

//#define CHESS
#define UPPER_LEFT_ANGLE   (char)218
#define UPPER_RIGHT_ANGLE  (char)191	
#define DOWN_LEFT_ANGLE    (char)192
#define DOWN_RIGHT_ANGLE   (char)217
#define VERT_LINE          (char)179
#define HORIZ_LINE         "\xC4\xC4"
#define WHITE_BOX          "\xDB\xDB"  
#define BLACK_BOX          "  " 

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef CHESS
	int n;
	cout << "������� ������ �����"; cin >> n;
	setlocale(LC_ALL, "C");
	/*for (int i = 176; i < 256; i++)
		cout << i << "\t" << (char)i << endl;*/
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);

			//if((i + j) % 2 == 0)cout << WHITE_BOX << WHITE_BOX;
			//else cout << "  ";
		}
		cout << endl;
	}
#endif // CHESS

	//CHESS_2
	
	int n = 5;
	cout << "�����" << endl;

	for (int i = 0; i < n; i++)
	{
		
		for (int i = 0; i < n; i++)cout << "*";
		for (int j = 0; j < n; j++)cout << "-";
		cout << endl;
		
 
	}
	cout << endl;
}