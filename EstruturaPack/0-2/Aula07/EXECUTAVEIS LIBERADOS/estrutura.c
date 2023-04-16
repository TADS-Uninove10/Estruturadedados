#include <stdio.h>
#include <stdlib.h>
typedef struct endereco {
       char rua[20];
       int numero;
       }end;
typedef struct pessoa {
       char nome[20];
       int idade;
       end logradouro;
       }gente ;
int main(int argc, char *argv[])
{
    gente lista [5];
    
    
    
    int i=0;
  
    for(i=0;i<5;i++)
   
    {
    printf("informe o nome ");
    scanf("%s",&lista[i].nome);
    
    printf("informe sua idade ");
    scanf("%i",&lista[i].idade);
    
    printf("endereço ");
    scanf("%s",&lista[i].logradouro.rua);
    
    printf("numero");
    scanf("%i",&lista[i].logradouro.numero);
    
   
}
for(i=0;i<5;i++)

{
 printf("nome==> %s idade==>%i rua==> %s numero==> %i\n",
 lista[i].nome,lista[i].idade,
 lista[i].logradouro.rua,lista[i].logradouro.numero);
 printf("...............................\n");
}
  system("PAUSE");	
  return 0;
}

