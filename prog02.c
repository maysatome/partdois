#include <stdio.h>
//2. Make a program in C that prints a table with the table of 1 to 9
int main ()
{

int i,j;

for(i = 1; i<10 ; i++ )
{
	
	for(j =1; j<10 ; j++ )	
	{
		printf ("%d x %d = %d\n", i,j, i*j);
	}
	printf("\n");
}
 return 0; 
}

