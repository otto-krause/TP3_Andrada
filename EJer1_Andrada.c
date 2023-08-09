#include <stdio.h>
void Mostrar(int a,int b)
{
 printf("%d\n%d",a,b);
} 
int main(int argc, char *argv[]) {
	int num,num2;
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	printf("Ingrese otro numero: ");
	scanf("%d",&num2);
	Mostrar(num,num2);
	return 0; 
}
