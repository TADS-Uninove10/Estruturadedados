#include "estrutura.h"

void excluir( void )
{
 		 FILE *e, *s;
 		 pessoa p;
 		 char n[31];
 		 int t = 0;
 		 
 		 remove("agenda.bak");
 		 rename("agenda.dat", "agenda.bak");
 		 e = fopen("agenda.bak", "rb");
 		 if ( e == NULL )
 		 {
		 		puts( "erro fatal: o arquivo nao pode ser aberto");
		 		getche();
		 		exit(4);
     }
     s = fopen("agenda.dat", "wb");
     if ( s == NULL )
 		 {
		 		puts( "erro fatal: o arquivo nao pode ser aberto");
		 		getche();
		 		exit(5);
     }
     printf("\nNome? ");
     gets(n);
     while( 1 )
     {
				fread(&p, sizeof(pessoa), 1, e);
				if( feof(e) ) break;
				if( strcmpi( n, p.nome) != 0 )
				   fwrite(&p,sizeof( pessoa ), 1, s);
	      else t++;
     }
     printf("Registro(s) excluido(s): %d\n", t);
     fclose(e);
     fclose(s);
     getche();
}
