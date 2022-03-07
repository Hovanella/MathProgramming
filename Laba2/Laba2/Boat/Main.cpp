// Main
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include "Boat.h"
#define NN 6
#define MM 3

using std::cout;
using std::endl;
using std::setw;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int V = 1500,
		v[NN] = { 100,  200,   300,  400,  500,  150 },
		c[NN] = { 10,   15,    20,   25,   30,  25 };
	short  r[MM];
	int cc = boat(
		V,   // [in]  максимальный вес груза
		MM,  // [in]  количество мест для контейнеров     
		NN,  // [in]  всего контейнеров  
		v,   // [in]  вес каждого контейнера  
		c,   // [in]  доход от перевозки каждого контейнера     
		r    // [out] результат: индексы выбранных контейнеров  
	);
	cout << endl << "- Задача о размещении контейнеров на судне";
	cout << endl << "- общее количество контейнеров    : " << NN;
	cout << endl << "- количество мест для контейнеров : " << MM;
	cout << endl << "- ограничение по суммарному весу  : " << V;
	cout << endl << "- вес контейнеров                 : ";
	for (int i = 0; i < NN; i++) cout << setw(3) << v[i] << " ";
	cout << endl << "- доход от перевозки              : ";
	for (int i = 0; i < NN; i++) cout << setw(3) << c[i] << " ";
	cout << endl << "- выбраны контейнеры (0,1,...,m-1): ";
	for (int i = 0; i < MM; i++) cout << r[i] << " ";
	cout << endl << "- доход от перевозки              : " << cc;
	cout << endl << "- общий вес выбранных контейнеров : ";
	int s = 0; for (int i = 0; i < MM; i++) s += v[r[i]]; cout << s;
	cout << endl << endl;
	system("pause");
	return 0;
}



//
//// Main
//#include <iostream>
//#include <iomanip>
//#include "Boat.h"
//#include "tchar.h"
//#include <time.h>
//#define NN 36
//#define MM 6
//#define SPACE(n) setw(n)<<" "
//int _tmain(int argc, _TCHAR* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	int V = 1500,
//		v[NN] = { 250, 560, 670, 400, 200, 270, 370, 330, 330, 440, 530, 120,
//			   200, 270, 370, 330, 330, 440, 700, 120, 550, 540, 420, 170,
//			   600, 700, 120, 550, 540, 420, 430, 140, 300, 370, 310, 120 },
//		c[NN] = { 15,26,  27,  43,  16,  26,  42,  22,  34,  12,  33,  30,
//			   42,22,  34,  43,  16,  26,  14,  12,  25,  41,  17,  28,
//			   12,45,  60,  41,  33,  11,  14,  12,  25,  41,  30,  40 };
//	short r[MM];
//	int maxcc = 0;
//	clock_t t1, t2;
//	cout << endl << "-- Задача об оптимальной загрузке судна -- ";
//	cout << endl << "-  ограничение по весу    : " << V;
//	cout << endl << "-  количество мест        : " << MM;
//	cout << endl << "-- количество ------ продолжительность -- ";
//	cout << endl << "   контейнеров        вычисления  ";
//	for (int i = 25; i <= NN; i++)
//	{
//		t1 = clock();
//		int maxcc = boat(V, MM, i, v, c, r);
//		t2 = clock();
//		cout << endl << SPACE(7) << setw(2) << i
//			<< SPACE(15) << setw(5) << (t2 - t1);
//	}
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}
