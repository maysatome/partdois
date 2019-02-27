#include <stdio.h>
#include <stdlib.h>

int main ()
{

int i, j;

//for (i=0; i>j; i++);

printf ("Digite o primeiro numero e pressione Enter: \n");
scanf ("%d", &i);
printf ("Digite o segundo numero e pressione Enter: \n");
scanf ("%d", &j);

	if (i < j)  //print ("Numero 1 menor que o 2");

	{
for(int val = i; val<j; i++)

        printf ("%d ", val);
	}


return 0;
}
