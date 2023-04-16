#include <stdio.h>
#include <stdlib.h>
void troca(int *a, int *b);
void troca(int *a, int *b){
     int c;
     c = *a;
     *a = *b;
     *b = c;
     
     printf("Dentro a%i b%i",a,b);
     
      }
