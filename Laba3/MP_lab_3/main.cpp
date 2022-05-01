#include <iostream>
#include <iomanip> 
#include "Salesman.h"

#define CITY 5
#define N 12

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int d[CITY][CITY] = {
				  {   INF,     2 * N,      21 + N,     INF,    N},
				  {   N,       INF,    15 + N,     68 - N,     84 - N},
				  {   2 + N,       3 * N,      INF,    86,     49 + N},
				  {   17 + N,      58 - N,     4 * N,      INF,    3 * N},
				  {   93 - N,      66 + N,     52,     13 + N,     INF}
	};

	int r[CITY];

	int s = salesman(
		CITY,       // [in]  ���������� ������� 
		(int*)d,    // [in]  ������ [n*n] ���������� 
		r           // [out] ������ [n] ������� 0 x x x x  
	);

	cout << "-- ������ ������������ -- ";
	cout << endl << "-- ����������  �������: " << CITY;
	cout << endl << "-- ������� ���������� : ";

	for (int i = 0; i < CITY; i++)
	{
		cout << endl;

		for (int j = 0; j < CITY; j++)

			if (d[i][j] != INF)
				cout << setw(3) << d[i][j] << " ";

			else
				cout << setw(3) << "INF" << " ";
	}

	cout << endl << "-- ����������� �������: ";

	for (int i = 0; i < CITY; i++)
		cout << r[i] + 1 << "-->";
	cout << 1;
	cout << endl << "-- ����� ��������     : " << s;
	cout << endl;

	system("pause");
	return 0;
}