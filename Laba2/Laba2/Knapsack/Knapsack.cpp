﻿#include <iostream>
#include "Combi1.h"
#include <tchar.h>
#include "Knapsack.h"
#define NN 4
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int V = 100,   // вместимость рюкзака              
		v[NN] = { 25, 30, 60, 20 },     // размер предмета каждого типа  
		c[NN] = { 25, 10, 20, 30 };     // стоимость предмета каждого типа 
	short m[NN];   // количество предметов каждого типа  {0,1}   
	int maxcc = knapsack_s(
		V,   // [in]  вместимость рюкзака 
		NN,  // [in]  количество типов предметов 
		v,   // [in]  размер предмета каждого типа  
		c,   // [in]  стоимость предмета каждого типа     
		m    // [out] количество предметов каждого типа  
	);
	std::cout << std::endl << "-------- Задача о рюкзаке ---------";
	std::cout << std::endl << "- количество предметов : " << NN;
	std::cout << std::endl << "- вместимость рюкзака  : " << V;
	std::cout << std::endl << "- размеры предметов    : ";
	for (int i = 0; i < NN; i++) std::cout << v[i] << " ";
	std::cout << std::endl << "- стоимости предмета   : ";
	for (int i = 0; i < NN; i++) std::cout << c[i] << " ";
	std::cout << std::endl << "- стоимости предметов  : ";
	for (int i = 0; i < NN; i++) std::cout << v[i] * c[i] << " ";
	std::cout << std::endl << "- оптимальная стоимость рюкзака: " << maxcc;
	std::cout << std::endl << "- вес рюкзака: ";
	int s = 0; for (int i = 0; i < NN; i++) s += m[i] * v[i];
	std::cout << s;
	std::cout << std::endl << "- выбраны предметы: ";
	for (int i = 0; i < NN; i++) std::cout << " " << m[i];



	//	// Main 
	//#include <iostream>
	//#include "Combi1.h"
	//#include "Knapsack.h"
	//#include <time.h>
	//#include <tchar.h>
	//#include <iomanip> 
	//#define NN 24
	//	int _tmain(int argc, _TCHAR * argv[])
	//	{
	//		setlocale(LC_ALL, "rus");
	//		int V = 300,              // вместимость рюкзака              
	//			v[] = { 25, 56, 67, 40, 20, 27, 37, 33, 33, 44, 53, 12,
	//				   60, 75, 12, 55, 54, 42, 43, 14, 30, 37, 31, 12 },
	//			c[] = { 15, 26, 27, 43, 16, 26, 42, 22, 34, 12, 33, 30,
	//				   12, 45, 60, 41, 33, 11, 14, 12, 25, 41, 30, 40 };
	//		short m[NN];
	//		int maxcc = 0;
	//		clock_t t1, t2;
	//		std::cout << std::endl << "-------- Задача о рюкзаке ---------";
	//		std::cout << std::endl << "- вместимость рюкзака  : " << V;
	//		std::cout << std::endl << "-- количество ------ продолжительность -- ";
	//		std::cout << std::endl << "    предметов          вычисления  ";
	//		for (int i = 12; i <= NN; i++)
	//		{
	//			t1 = clock();
	//			maxcc = knapsack_s(V, i, v, c, m);
	//			t2 = clock();
	//			std::cout << std::endl << "       " << std::setw(2) << i
	//				<< "               " << std::setw(5) << (t2 - t1);
	//		}
	//		std::cout << std::endl << std::endl;
	//		system("pause");
