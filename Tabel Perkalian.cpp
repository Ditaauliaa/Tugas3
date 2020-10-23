/* Dita Aulia Oktavian */
/* 20051397020-2020B */
/*     Semangattt     */
#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	int i,j;
	cout << "Dita Aulia Oktavian\n";
	cout << "2020B-20051397020\n";
	cout << "Manajemen Informatika\n\n\n\n";
	cout << "                            Tabel Perkalian 1-10 \n\n\n";
	
	for (i=1; i<=10; i++)
	{
		for (j=1; j<=10; j++)
		{
			cout << " " << i * j << "\t ";
		}
		
		cout << endl << endl << endl;
	}
	getch();
}
