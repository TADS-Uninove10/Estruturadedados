#include <stdio.h>
#include <stdlib.h>
//============================PROTO TYPE==================================
void cadastrar (int vet [],int n);
//void ordena (int vet [],int n);

//=========================================================================
//=========================================================================
//=========================================================================
int main(int argc, char *argv[])
{
int vet[10];
int contador = 0;
int Opc = 127;

while(Opc!=0)
    {
                printf("Menu de Opcoes\n");
                printf("1 - Cadastrar\n");
                printf("2 - Ordsena\n");
                printf("3 - Exibir Crecente\n");
                printf("4 - Exibir Decrecente\n");
                printf("5 - Subistituir\n");
                printf("5 - Localizar Frequência\n");
                printf("5 - Sair\n");
                printf("Escolha uma opcao: ");
                scanf("%i",&Opc);
        
        if(Opc == 0)
        {
            printf("Saindo do programa...\n");
        }
        else if(Opc == 1)
        {
            cadastrar(vet,10);
        }
        else if(Opc == 2)
        {
            ordena(vet,10);
        }
        else if(Opc == 3)
        {
            printf("Exibir Crecente\n");
        }
        else if(Opc == 4)
        {
            printf("Voce Localizou\n");
        }
        else
        {
            printf("Opcao invalida\n");
        }
        
    }
  system("PAUSE");	
  return 0;
}

// =====================================================================================
//==========================FUNÇÂO======================================================
//======================================================================================
//======================================================================================
void cadastrar (int vet [],int n){
      int i =0;
      for (i = 0 ; i < n ; i++)
      {
          printf ("Digite um numeo");
          scanf("%d",&vet [i]);
      }
      }

/*void ordena (int vet [],int n);


ord=10;
while (vet>1)
{
      for (cont=1;cont<=10;cont++);
      {
          if (x[cont]>[cont+1])
          
          }
          aux=n [cont]
          n[cont]>[cont+1];
          n[cont+1]=aux;
          }
          }
          ord=ord-1;
          }
          printf("&d,",n[cont]);
          }
  */        
