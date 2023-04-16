#include"libtroca.h"
int main(int argc, char *argv[])
{
    int a,b;
    printf("informe a");
    scanf("%i",&a);
    
    printf ("informe b");
    scanf ("%i",&b);
    
    printf("Antes a%i b%i ",a,b);
    troca(&a,&b);
    printf("Depois a%i b%i",a,b);
    
  
  system("PAUSE");	
  return 0;
}


