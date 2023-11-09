#include<stdio.h>
int main()
{
  int hasil=1,bil;
  printf("Masukkan bilangan : "); scanf(" %d",&bil);
  int i;
  for(i=1;i<=bil;i++)
    {
      hasil=i*hasil;
    }
  printf("\nfaktorial dari %d! adalah  = %d",bil,hasil);
}
