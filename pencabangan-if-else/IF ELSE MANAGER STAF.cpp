#include <stdio.h>
int main ()
{
	char huruf, A, B, C;
	printf ("Masukan sebuah huruf : "); scanf ("%c", &huruf);
	if (huruf == 'A')
	printf ("Direktur\n");
	else if (huruf == 'B')
	printf ("Manager\n");
	else if (huruf == 'C')
	printf ("Staf\n");
	else 
	printf("Kode Salah");
}
