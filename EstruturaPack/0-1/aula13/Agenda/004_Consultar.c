#include "estrutura.h"

void consultar(void)
{
   FILE *s;
   pessoa p;
   char n[31];
   int t=0;
   s = fopen("agenda.dat", "rb");
   if( s == NULL )
   {
	 		 puts("Erro fatal: nao foi possivel abrir o arquivo");
	 		 exit(1);
   }
   printf("\nNome? ");
   gets(n);
   while(1)
   {
		   fread(&p, sizeof(pessoa),1,s);
		   if( feof(s)) break;
	 		 if( strcmpi(n, p.nome) == 0)
	 		 {
			 		 printf("\nNome: %s", p.fone);
			 		 t++;
	 		 }
   }
   printf("\nRegistro(s) encontrado(s): %d\n", t);
   fclose(s);
   getche();
}
