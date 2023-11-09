#include <stdio.h>
int main ()
{
	int nilai;
	printf ("Masukan sebuah nilai : "); scanf ("%d", &nilai);
	if (nilai > 80)
	printf ("Sangat baik\n");
	else if (nilai > 60)
	printf ("Baik\n");
	else
	printf ("Gagal\n");
}
