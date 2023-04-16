#include <stdio.h>
#include <stdlib.h>
bynary (int vetor,int tamanho,int chave);
{     
      int com,meio,fim;
        com = 0 fim = tamanho -1;
        while (com <= fim){
              meio =(com+fim)/2;
              if (chave < vetor[meio]);
              {
              fim = meio -1;
              }
              else 
              if (chave > vetor[meio])
              {
              com = meio + 1;  
              }
              else return meio;
}
return -1       
              
}
int main(int argc, char *argv[])
{
    int iten;
    int chave;
    
    
    printf("\nMetodo de Pesquisa Sequencial\n");  
    printf("\nForneca os elementos do vetor a ser pesquisado \n");
    scanf("%d",&vet[i]);
    
  system("PAUSE");	
  return 0;
}
