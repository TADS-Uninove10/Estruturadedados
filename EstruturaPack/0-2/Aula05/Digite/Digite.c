#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  int *pa;
  
  printf("digite um numero\n");
  scanf ("%d",&a);
  pa=&a;
  
  printf ( "numero digitado e %d\n",*pa);
  system("PAUSE");	
  return 0;
}
