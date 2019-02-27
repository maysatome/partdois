#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
int i, j;

//for (i=0; i>j; i++);

printf ("Digite o primeiro numero e pressione Enter: \n");
scanf ("%lf", &i);
printf ("Digite o segundo numero e pressione Enter: \n");
scanf ("%lf", &j);
	
	if (i < j)  //print ("Numero 1 menor que o 2");
	
	{
		printf ("Lista de valores de i ate j: \n ", i++);
	}
	
	
return 0;	
}
