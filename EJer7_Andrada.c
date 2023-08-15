#include <stdio.h>
void Mayor(int a, int b)
{
if (a>b)
   printf("%d es el mayor",a);
else
{
   if(b>a)
     printf("%d es el mayor",b);
   else
     printf("Ambos son iguales");
 }
}


int main(int argc, char *argv[]) {
  int num,num2;
  printf("Ingrese un numero: ");
  scanf("%d",&num);
  printf("Ingrese otro numero: ");
  scanf("%d",&num2);
  Mayor(num,num2);
  return 0;
}
