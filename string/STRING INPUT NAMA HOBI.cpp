#include<stdio.h>
#include<string.h>
main()
{
	char iNama[25], iHobi[25];
	printf("Masukan Nama : ");
	gets(iNama);
	printf("Masukan Hobi : ");
	gets(iHobi);
	printf("\nNama Anda %s dan Hobi Anda %s", iNama, iHobi);
	return 0;
}
