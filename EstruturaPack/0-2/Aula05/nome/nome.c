#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nome[20];
  char *pnome;
    
  printf ("digite um nome");
  scanf ("%s",&nome);
  pnome =&nome[0];
  while(*pnome != '\0')
  {
       printf ("%c\n",*pnome);
       pnome++;
      }
 
  system("PAUSE");	
  return 0;
}
