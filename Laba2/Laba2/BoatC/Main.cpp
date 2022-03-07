// main (������� ������  � ���������� �����������)  
#include <iostream>
#include <iomanip> 
#include "BoatC.h"
#include <tchar.h>
#define NN 4
#define MM 3

using std::cout;
using std::endl;
using std::setw;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int v[] = { 100, 200, 300, 400 }; // ���
	int c[] = { 10,  15,  20,  25 };     // ����� 
	int minv[] = { 350, 250,   0 };      // �����������  ��� 
	int maxv[] = { 750, 350, 750 };    // ������������ ���

	short r[MM];
	int cc = boat_�(
		MM,    // [in]  ���������� ���� ��� �����������
		minv,  // [in]  ������������ ��� ���������� �� ������  ����� 
		maxv,  // [in]  ����������� ��� ���������� �� ������  �����  
		NN,    // [in]  ����� �����������  
		v,     // [in]  ��� ������� ����������  
		c,     // [in]  ����� �� ��������� ������� ����������   
		r      // [out] ������  ��������� �����������  
	);
	cout << endl << "- ������ � ���������� ����������� �� ����� -";
	cout << endl << "- ����� ���������� �����������   : " << NN;
	cout << endl << "- ���������� ���� ��� �����������  : " << MM;
	cout << endl << "- �����������  ��� ����������  : ";
	for (int i = 0; i < MM; i++) cout << setw(3) << minv[i] << " ";
	cout << endl << "- ������������ ��� ����������  : ";
	for (int i = 0; i < MM; i++) cout << setw(3) << maxv[i] << " ";
	cout << endl << "- ��� �����������      : ";
	for (int i = 0; i < NN; i++) cout << setw(3) << v[i] << " ";
	cout << endl << "- ����� �� ���������     : ";
	for (int i = 0; i < NN; i++) cout << setw(3) << c[i] << " ";
	cout << endl << "- ������� ���������� (0,1,...,m-1) : ";
	for (int i = 0; i < MM; i++) cout << r[i] << " ";
	cout << endl << "- ����� �� ���������     : " << cc;
	cout << endl << endl;
	system("pause");
	return 0;
}



// main (������� ������  � ���������� �����������)
//#include <iostream>
//#include <iomanip> 
//#include <time.h>
//#include "Auxil.h"
//#include "tchar.h"
//#include "BoatC.h"
//#define SPACE(n) setw(n)<<" "
//#define NN 8
//int _tmain(int argc, _TCHAR* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	int v[NN + 1], c[NN + 1], minv[NN + 1], maxv[NN + 1];
//	short r[NN];
//	auxil::start();
//	for (int i = 0; i <= NN; i++) {
//		v[i] = auxil::iget(100, 200);
//		c[i] = auxil::iget(10, 100);
//		minv[i] = auxil::iget(50, 120);
//		maxv[i] = auxil::iget(150, 850);
//	}
//	cout << endl << "-- ������ � ���������� ����������� -- ";
//	cout << endl << "-- ����� �����������: " << NN;
//	cout << endl << "-- ���������� ------ ����������������� -- ";
//	cout << endl << "  ����     ����������  ";
//	clock_t t1, t2;
//	for (int i = 4; i <= NN; i++) {
//		t1 = clock();
//		boat_�(i, minv, maxv, NN, v, c, r);
//		t2 = clock();
//		cout << endl << SPACE(7) << setw(2) << i
//			<< SPACE(15) << setw(6) << (t2 - t1);
//	}
//	cout << endl; system("pause");
//	return 0;
//}
