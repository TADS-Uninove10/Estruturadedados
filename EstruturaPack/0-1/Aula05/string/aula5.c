#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    char String [12]="Clecio"; 
    printf("O tamanho da String e %d\n",tam_vetor(String));//pede o tamanho do vetor
    printf("%d\n", str_comp("jose","jose"));//compara o tamanhor da string 
    printf("%d\n", str_comp("jose","josec"));// retorna zero ou um
    printf("%d\n", str_comp("jose  bb","jose  bb"));
  
  system("PAUSE");	
  return 0;
}
