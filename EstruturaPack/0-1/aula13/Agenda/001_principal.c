#include "estrutura.h"

int main(int argc, char *argv[]) 
{
	while( 2 )//qualquer coisa diferente de zero everdadeiro
	{
     switch( menu() )// switch seleção multipla 
		 {
		    case 1: incluir(); break;// parada
		    case 2: listar(); break;
		    case 3: consultar(); break;
		    case 4: excluir(); break;
		    case 5: exit(0);
		 }
  }
	return 0; 
}

int menu( void )// retorna um valor pra quem o chama
{
   int op;
   system("cls");
   puts("\n1 - Incluir");
   puts("2 - Listar");
   puts("3 - Consultar");
   puts("4 - Excluir");
   puts("5 - Sair");
   scanf("%d*c",&op);
   printf( "%d", op );
   return op;
}
