#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
char [100] [60] ;
int contador = 0;
ops 127;
{
    int Opc=-1;
    printf("Menu de Opcoes\n");
    printf("1 - Adicionar\n");
    printf("2 - Excluir\n");
    printf("3 - Exibir\n");
    printf("4 - Localizar\n");
    printf("0 - Sair\n");
/*
    while(Opc!=0)
    {
        printf("Escolha uma opcao: ");
        scanf("%i",&Opc);
        
        if(Opc == 0)
        {
            printf("Saindo do programa...\n");
        }
        else if(Opc == 1)
        {
            printf("Voce Adicionou\n");
        }
        else if(Opc == 2)
        {
            printf("Voce Excluiu\n");
        }
        else if(Opc == 3)
        {
            printf("Voce Exibiu\n");
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
*/


    while(Opc!=0)
    {
        printf("Escolha uma opcao: ");
        scanf("%i",&Opc);
        
        switch(Opc)
        {
            case 0:
                printf("Saindo do programa... bye\n");
            break;

            case 1:
                printf("%s",nomes[contador]);
            break;

            case 2:
                  for (i = 0 ; i < contador; i--){
                printf("Voce Excluiu!\n")
                }
            break;
            
            case 3:
                 for (i = 0 ; i < Contador; i++){
                printf("%s",nomes[i]);
                printf("\n________\n");
                }
            break;

            case 4:
                printf("Voce Localizou!\n");
            break;
            
            default:
                printf("Opcao invalida!\n");
            break;
        }
    }

    
  system("PAUSE");	
  return 0;
}
