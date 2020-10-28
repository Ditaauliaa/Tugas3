/* Dita Aulia Oktavian */
/*     Semangattt     */
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;
main ()
{
	int i, b, jumlah_suku, total_suku;
	cout << "Dita Aulia Oktavian\n";
	cout << "2020B-20051397020\n";
	cout << "Manajemen Informatika\n";
	
	cout << "\nMenghitung 6 Suku Pertama\n";
	cout << "Deret Bilangan = 1, 8, 27, 64, ...\n\n";
	
	
	for (i=1; i<= 6; i++){
		b = pow(i, 3);
		if (i<6){
			cout << " ";
			cout << i << "^3 = "<< b << " || ";
		}
		if (i==6){
			cout << " ";
			cout << i << "^3 = "<< b << endl;
		}
		jumlah_suku += b;
		total_suku = jumlah_suku - 1;
		}
		cout << "\nJumlah 6 Suku Pertama = " << total_suku << endl << endl;
		return 0;
	}
