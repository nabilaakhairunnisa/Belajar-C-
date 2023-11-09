#include <stdio.h>
 
int main(void)
{
  int i = 1;
  int j;
  while (i <= 10) 
  {
    j = 1;
    while (j <= 10) 
	{
      printf("%i * %i = %i\n",i,j,j*i);
      j++;
    }
    printf("\n");
    i++;
  }
}
