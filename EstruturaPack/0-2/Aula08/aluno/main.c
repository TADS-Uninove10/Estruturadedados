#include <stdio.h>
#include <stdlib.h>
void cadastrar (int vet [],int n);
void calcularsituacao (int vet [],int n);
typedef struct boletim{
        float av1;
        float av2;
        float av3;
        }end;
typedef struct aluno {
       char nome[20];
       int ra;
       end nota;
       }gente; 
int main(int argc, char *argv[])
{
    
int vet[10];
int contador = 0;
int Opc = 127;

while(Opc!=0)
{
    printf("Menu de Opcoes\n");
    printf("1 - Cadastrar\n");
    printf("2 - Calcular nota\n");  
    printf("3 - situação\n");               
    printf("0 - Sair\n");
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
      else if (Opc == 2)
      {
        calcularsituacao(vet,10);   
      }
      else if (Opc == 3)
      {
        
        if(situacao=0){
        printf("Aprovado");
        } 
        else{
             prinft("Reprovado");
        } 
      }
}                
  system("PAUSE");	
  return 0;
}
//===================função===========================

void calcularsituacao (aluno vet[],int n){
      int i =0;
      for (i = 0 ; i < n ; i++)
      {
         if (vet [i].bol,av1 >6 ||
         vet [i].bol,av2 >6 ||
         vet [i].bol,av3 >6 ||) {
             vet[i].situacao=1:
             }
             else{
             vet [i].situacao=0;
      }
      }
      }
      
void cadastrar (int vet [],int n);      
       gente lista [5];
    
             int i=0;
  
             for(i=0;i<5;i++)
   
             {
              fflush(stdin);
              printf("informe o nome ");
              scanf("%s",&lista[i].nome);
              fflush(stdin);
              printf("informe seu RA ");
              scanf("%i",&lista[i].ra);
              fflush(stdin);
              printf("AV1");
              scanf("%f",&lista[i].nota.av1);
              fflush(stdin);
              printf("AV2");
              scanf("%f",&lista[i].nota.av2);
              fflush(stdin);
              printf("AV3");
              scanf("%f",&lista[i].nota.av3);
              
              }
              for(i=0; i<5; i++)
              {
                   printf("nome:%s  RA:%i av1;%0.2f av2;0.2%f av3;0.2%f\n",lista[i].nome,lista[i].ra,lista[i].nota.av1,lista[i].nota.av2,lista[i].nota.av3);
                   printf(".........................\n");
              }
      
      
      
      
     
     
     
