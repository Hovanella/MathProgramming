// main 
#include <iostream>
#include <iomanip> 
#include <tchar.h>
#include <stdio.h>
#include "Salesman.h"
#define N 5

using std::cout;
using std::setw;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int d[N][N] = { //0   1    2    3     4        
				   {  0,  45, INF,  25,   50},    //  0
				   { 45,   0,  55,  20,  100},    //  1
				   { 70,  20,   0,  10,   30},    //  2 
				   { 80,  10,  40,   0,   10},    //  3
				   { 30,  50,  20,  10,    0} };   //  4 
	int r[N];                     // результат 
	int s = salesman(
		N,          // [in]  количество городов 
		(int*)d,          // [in]  массив [n*n] расстояний 
		r           // [out] массив [n] маршрут 0 x x x x  

	);
	cout << endl << "-- Задача коммивояжера -- ";
	cout << endl << "-- количество  городов: " << N;
	cout << endl << "-- матрица расстояний : ";
	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++)
			if (d[i][j] != INF) cout << setw(3) << d[i][j] << " ";
			else cout << setw(3) << "INF" << " ";
	}
	cout << endl << "-- оптимальный маршрут: ";
	for (int i = 0; i < N; i++) cout << r[i] << "-->"; cout << 0;
	cout << endl << "-- длина маршрута     : " << s;
	cout << endl;
	system("pause");
	return 0;
}


//// main 
//#include "Auxil.h"
//#include <iostream>
//#include <iomanip> 
//#include <time.h>
//#include <tchar.h>
//#include "Salesman.h"
//#define SPACE(n) setw(n)<<" "
//#define N 12
//int _tmain(int argc, _TCHAR* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	int d[N][N], r[N];
//	auxil::start();
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i == j) { d[i][j] = INF; }
//			else { d[i][j] = auxil::iget(10, 300); }
//		}
//	}
//	cout << endl << "-- Задача коммивояжера -- ";
//	cout << endl << "-- количество ------ продолжительность -- ";
//	cout << endl << "      городов           вычисления  ";
//	clock_t t1, t2;
//	for (int i = 5; i <= N; i++) {
//		t1 = clock();
//		salesman(i, (int*)d, r);
//		t2 = clock();
//		cout << endl << SPACE(7) << setw(2) << i
//			<< SPACE(15) << setw(5) << (t2 - t1);
//	}
//	cout << endl;
