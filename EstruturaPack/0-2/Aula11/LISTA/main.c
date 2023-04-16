#include <stdio.h>
#include <stdlib.h>
typedef struct celula{
      int codigo;
      char nome [60];
      int idade;
      struct celula*prox;          
      }cel;
      cel*inicio,*novo,*ant,*aux;
      void inserir();
      void localizar (int codigo);
      void imprimir();
      
int main(int argc, char *argv[])
{
        char nome [60];
        
        int Opc =99;
        
   while (Opc !=0){
          printf ("MENU DE OPCOES");
          printf ("\n 1-Inserir\n 2-imprimir\n");
          scanf("%i", &Opc);
            switch (Opc){
            case 1:
                 inserir();                                  
            break;
            case 2:
                  imprimir();                              
            break;
}
}
  system("PAUSE");	
  return 0;
}

void inserir(){
     novo = malloc (sizeof (cel));
     fflush(stdin);
     printf ("informe o codigo");
     scanf ("%i",&novo -> codigo );
     
     novo -> prox = NULL;
     if(inicio==NULL)
          {
          inicio = novo;
          }else{
                localizar(novo ->codigo);
                if (ant == NULL){
                        inicio = novo;                                              
                        }
                        novo -> prox =aux;
                        }
                }
void localizar (int codigo){
     int achou;
     ant = NULL;
     aux = inicio;
     achou= 0;
     while (aux != NULL&&achou==0){
           if (aux -> codigo >=  codigo){
                   achou =1;
                   }else{
                         ant=aux;
                         aux=aux->prox;
                         }
           }
           }
           
void imprimir(){
     aux = inicio;
     if (inicio ==NULL){
                printf("lista vazia");
                }else{
                      while(aux  !=NULL){
                       printf("%s",aux ->nome);
                       aux = aux -> prox;          
     }
     }
     }
          
                      
     
     
     
     
     
