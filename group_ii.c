#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n1, n2, i;
    printf ("Digite o primeiro numero e pressione Enter: \n");
    scanf ("%d", &n1);
    printf ("Digite o segundo numero e pressione Enter: \n");
    scanf ("%d", &n2);

	if (n1 < n2)  //print ("Numero 1 menor que o 2");
	{
        for(i = n1; i<=n2; i++)
           {
               printf ("%d ",i);
           }
	}

    else {
        for(i = n1; i<=n2; i--)
           {
               printf ("%d ",i);
           }
	}

    return 0;
}
