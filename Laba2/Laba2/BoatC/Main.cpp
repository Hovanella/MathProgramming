// main (решение задачи  о размещении контейнеров)  
#include <iostream>
#include <iomanip> 
#include "BoatC.h"
#include <tchar.h>
#define NN 4
#define MM 3
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int v[] = { 100, 200, 300, 400 }; // вес
	int c[] = { 10,  15,  20,  25 };     // доход 
	int minv[] = { 350, 250,   0 };      // минимальный  вес 
	int maxv[] = { 750, 350, 750 };    // максимальный вес

	short r[MM];
	int cc = boat_с(
		MM,    // [in]  количество мест для контейнеров
		minv,  // [in]  максимальный вес контейнера на каждом  месте 
		maxv,  // [in]  минимальный вес контейнера на каждом  месте  
		NN,    // [in]  всего контейнеров  
		v,     // [in]  вес каждого контейнера  
		c,     // [in]  доход от перевозки каждого контейнера   
		r      // [out] номера  выбранных контейнеров  
	);
	std::cout << std::endl << "- Задача о размещении контейнеров на судне -";
	std::cout << std::endl << "- общее количество контейнеров   : " << NN;
	std::cout << std::endl << "- количество мест для контейнеров  : " << MM;
	std::cout << std::endl << "- минимальный  вес контейнера  : ";
	for (int i = 0; i < MM; i++) std::cout << std::setw(3) << minv[i] << " ";
	std::cout << std::endl << "- максимальный вес контейнера  : ";
	for (int i = 0; i < MM; i++) std::cout << std::setw(3) << maxv[i] << " ";
	std::cout << std::endl << "- вес контейнеров      : ";
	for (int i = 0; i < NN; i++) std::cout << std::setw(3) << v[i] << " ";
	std::cout << std::endl << "- доход от перевозки     : ";
	for (int i = 0; i < NN; i++) std::cout << std::setw(3) << c[i] << " ";
	std::cout << std::endl << "- выбраны контейнеры (0,1,...,m-1) : ";
	for (int i = 0; i < MM; i++) std::cout << r[i] << " ";
	std::cout << std::endl << "- доход от перевозки     : " << cc;
	std::cout << std::endl << std::endl;
	system("pause");
	return 0;
}

// main (решение задачи  о размещении контейнеров)
#include <iostream>
#include <iomanip> 
#include <time.h>
#include "Auxil.h"
#include "tchar.h"
#include "BoatC.h"
#define SPACE(n) std::setw(n)<<" "
#define NN 8
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int v[NN + 1], c[NN + 1], minv[NN + 1], maxv[NN + 1];
	short r[NN];
	auxil::start();
	for (int i = 0; i <= NN; i++) {
		v[i] = auxil::iget(100, 200);
		c[i] = auxil::iget(10, 100);
		minv[i] = auxil::iget(50, 120);
		maxv[i] = auxil::iget(150, 850);
	}
	std::cout << std::endl << "-- Задача о размещении контейнеров -- ";
	std::cout << std::endl << "-- всего контейнеров: " << NN;
	std::cout << std::endl << "-- количество ------ продолжительность -- ";
	std::cout << std::endl << "  мест     вычисления  ";
	clock_t t1, t2;
	for (int i = 4; i <= NN; i++) {
		t1 = clock();
		boat_с(i, minv, maxv, NN, v, c, r);
		t2 = clock();
		std::cout << std::endl << SPACE(7) << std::setw(2) << i
			<< SPACE(15) << std::setw(6) << (t2 - t1);
	}
	std::cout << std::endl; system("pause");
	return 0;
}
