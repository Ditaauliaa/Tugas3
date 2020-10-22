/* Dita Aulia Oktavian */
/*     Semangattt     */
#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	int i, j, n;
	cout << "Dita Aulia Oktavian\n";
	cout << "2020B-20051397020\n";
	cout << "Manajemen Informatika\n";
	
	cout << "\nMasukkan Tinggi Segitiga = ";
	cin >> n;
	for (i=1; i<=n; i++){
	for (j=1; j<=i; j++){
		cout << j;
	}
		cout << endl;
	}
	for (i=n-1; i>=1; i--){
	for (j=1; j<=i; j++){
		cout << j;
	}
	cout << endl;
	}
getch();
} 
