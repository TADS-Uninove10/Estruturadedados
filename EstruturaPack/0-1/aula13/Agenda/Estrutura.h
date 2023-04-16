#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef _AGENDA_ESTR_
   //
   // Estrutura do registro
   //
   typedef struct //cria um tipo de dado definido
   {
      char nome[31];
      char fone[21];
   } pessoa;

   // prototipos das funções 
   //
   int menu( void );
   void inclur( void );
   void listar( void );
   void consultar( void );
   void excluir( void );
   
   #define _AGENDA_ESTR_
#endif
