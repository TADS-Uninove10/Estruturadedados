#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //soma();
    
    //int resultado = multiplica();
   // printf ("o resultado e %i\n",resultado);
   
   int resultado = subtrair(50,35);
   printf ("o resultado e %i\n",resultado);
    
  
  system("PAUSE");	
  return 0;
}

         int soma () {
         int a=10;
         int b=2;
         int c=a+b;
         printf ("%i",c);
         return 0;
         
         }
         
         int multiplica(){
             int a=50;
             int b=3;
             int c=a * b ;
             return c;
             
             }
             int subtrair(int a ,int b){
                 int c = a - b;
                 return c;
                 }
