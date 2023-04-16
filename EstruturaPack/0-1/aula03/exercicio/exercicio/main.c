#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int matriz[4][4];
  matriz[0][0]=1;
  matriz[0][1]=2;
  matriz[0][2]=3;
  matriz[0][3]=4;
  
  matriz[1][0]=1;
  matriz[1][1]=2;
  matriz[1][2]=3;
  matriz[1][3]=4;
  
  matriz[2][0]=1;
  matriz[2][1]=2;
  matriz[2][2]=3;
  matriz[2][3]=4;
  
  matriz[3][0]=1;
  matriz[3][1]=2;
  matriz[3][2]=3;
  matriz[3][3]=4;
  
  int x,y ;
  int soma;
  for (x=0; x<=3; x++)
  {
      for(y=0; y<=3; y++)
      {
     
      if (x>y) soma = soma +matriz [x] [y];
      } 
}
system("pause");
  return 0;
}

