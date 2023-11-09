#include <stdio.h>
#include <conio.h>
#include <iostream>
main()
{
	int a[3][2][2]={
	{{1,2},{3,4}},
	{{5,6},{7,8}},
	{{9,10},{11,12}}
	};
	for(int i=0;i<3;i++){
	for(int j=0;j<2;j++){
	for(int k=0;k<2;k++){
	printf("%d \t",a[i][j][k]);
	}
	}
	printf("\n");
	}
	getch();
}
