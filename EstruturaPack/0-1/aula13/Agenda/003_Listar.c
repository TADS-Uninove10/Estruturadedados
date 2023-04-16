#include "estrutura.h"

void listar( void )
{
   system("cls");
	 FILE *s;
   pessoa p;
   s = fopen("agenda.dat", "rb");
   if( s == NULL )
   {
      puts("erro fatal! o arquivo nao pode ser aberto");
      exit(1);
   }
   while( 1 )
   {
      fread(&p, sizeof(pessoa),1,s);//ler uma contia de bytes 
      if(feof(s)) break;
      printf("\n%s - %s)", p.nome, p.fone);
   }
   printf("\n");
   getche();
   fclose(s);
}
