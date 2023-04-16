#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b,c;
a = b = c = 0;
printf("Digite a quantidade de nos a somar\n");
scanf("&d",&b);
for(a=1; a <=b; a++)
{
      //c=c+ (0*a-1);
      c = c + (2*a-1);
      
      }
printf("a soma dos nos impares e &d\n",c);
  system("PAUSE");	
  return 0;
}
