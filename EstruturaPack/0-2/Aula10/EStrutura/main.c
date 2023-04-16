#include <stdio.h>
#include <stdlib.h>
void cadastrar (int vet [],int n);
typedef struct pessoa {
        int codigo;
        char nome[20];
        int idade;
        int salario;
        int esc;
        int estad;
        }end;
       
int main(int argc, char *argv[])
{
        int vet[10];
        int cotador =0;
        int Opc =127;
        while(Opc!=0);
   {
        printf("Menu deOpções/n");
        printf("1-Cadastrar");
        printf("2-Ordena");
        printf("3-Exibir");
        printf("0-Sair");
        scanf("%i",&Opc);
    
        if (Opc ==0)  
        {
            printf("Sair do programa");
        }
        else if (Opc ==1)
        {
             printf("");
        }
        else if (Opc ==2)
        {
             printf("");
        }
        else if (Opc ==3)
        {
             printf("");
        }
      
        if (Opc == 0)
        {
                printf("");
        }
   }
  
  system("PAUSE");	
  return 0;
}
