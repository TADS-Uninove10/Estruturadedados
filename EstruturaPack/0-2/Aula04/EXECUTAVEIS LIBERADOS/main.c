#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char nome[20];
    printf ("Digite um nome: ");
    gets(nome);
    puts(nome);
    int tamanho = strlen(nome);
    printf("O tamanho e: %i \n", tamanho);
    
    int i, contador=0;
    for(i=0;i<=tamanho;i++)
    {
        if (nome[i] == 'a' || nome[i] == 'A')
        {
            contador++;
        }
    }
    
    printf("Seu nome possui %i letra(s) A \n",contador);
    
    char frase[20];
    char frase2[20];
    strcpy(frase,"teste de string");
    printf("%s \n",strcat(frase,nome));
    

    strcpy(frase2,strcat(frase,nome));
    puts(frase2);
    system("PAUSE");
  return 0;
}
