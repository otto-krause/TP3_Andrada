#include <stdio.h>
int Resistencia(int a, int b,int c)
{
	printf("Resistencia N°%d: %d\n",a,b);
	c=b+c;
	if (a==5)
		printf("Total: %d",c);
	return c;
}
int main(int argc, char *argv[]) {
	int r,i,acu=0;
	for (i=1;i<6;i++)
	{
		printf("Ingrese Resistencia: ");
		scanf("%d",&r);
		acu=Resistencia(i,r,acu);
	}
	return 0; 
}
