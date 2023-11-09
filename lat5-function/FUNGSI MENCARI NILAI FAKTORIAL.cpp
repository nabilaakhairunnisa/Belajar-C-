#include<stdio.h>

int factorial(int n)
{
	if (n==1)
		return(1); 
	else
		return (n*factorial(n-1)); 
}

int main()
{
	int x;
	printf("Mencari nilai faktorial\n");
	printf("Masukkan nilai x : "); scanf("%d",&x);
	printf("Nilai factorial dari %d=%d\n",x,factorial(x));
}
