#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Estrutura.h"

void incluir( void)// sem retorno 
{
   FILE *s;//declaração do tipo de arquivo definido pelo usuario 
   pessoa p;//
   s = fopen("agenda.dat", "ab"); //abre um arquivo 
   if( s == NULL )
   {
	 		 puts("erro fatal! o arquivo nao pode ser aberto");
	 		 exit(1);
   }
   printf("\nNome ");
   gets(p.nome);//le uma string 
   printf("Fone: ");
   gets(p.fone);
   fwrite(&p,sizeof(pessoa),1, s);//fwrite escreve sizeoftamanho grava no arquivo s
   printf("\nRegistro gravado");
   fclose(s);// fechar arquivo s
}
