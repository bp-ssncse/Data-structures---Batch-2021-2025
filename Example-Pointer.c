#include <stdio.h>

int main(void) 
{ 
  int x=10;   
  int *px=&x;
  printf("\n Vaule of x = %d",x);
  printf("\n size of x = %d",sizeof(x));
  printf("\n Address of x = %p",px);
  printf("\n Value of x through px = %d",*px);
  px++;// px=px+1  1 * sizeof the variable x
  printf("\n Address of x = %p",px);
  px++;
  printf("\n Address of x = %p",px);
  return 0;
  }