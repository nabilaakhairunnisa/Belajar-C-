#include<iostream>
using namespace std;
int main()
{
	float pokok = 10000000, bunga = 0.02, total, cicilan;
	int bulan = 10, i;
	cicilan = pokok/bulan;
	bunga = 0.015 * pokok;
	total = cicilan + bunga;
	printf ("Bulan\t Cicilan\t Pokok bunga\t Total Cicilan\n");
	for (i=1; i<=bulan; i++)
	{
		printf(" %i\t %0.2f\t %0.2f\t %0.2f\n ", i, cicilan, bunga, total );
		bunga = bunga - (0.015 * cicilan);
		total = cicilan + bunga;
	}
}
