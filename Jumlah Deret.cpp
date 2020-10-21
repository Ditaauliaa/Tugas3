/* Dita Aulia Oktavian */
/*     Semangattt     */
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
main()
{
	int A=0, B, C, jumlah=0, i, n;
	cout << "Dita Aulia Oktavian\n";
	cout << "2020B-20051397020\n";
	cout << "Manajemen Informatika\n";
	
	cout << "\nMenghitung Jumlah Deret Bilangan\n";
	cout << "Deret Bilangan = 3, 7, 11, 15, ...";
	
	cout << "\nMasukkan Bilangan Awal : ";
	cin >> A;
	cout << "Masukkan Beda : ";
	cin >> B;
	cout << "Masukkan Jumlah Sampai Deret Ke-n : ";
	cin >> n;
	
	cout << "Deret Ke-" <<n<< " : ";
	cout << A << " , ";
	jumlah = jumlah + A;
	for (i=0; i<n-1; i++){
		C = A + B;
		A = C;
		cout <<C<< " , ";
		jumlah = jumlah + C;
	}
	
	cout << "\nJumlah Deret Ke-" <<n<< " : ";
	cout << jumlah;
	
	getch;
	return 0;
}
