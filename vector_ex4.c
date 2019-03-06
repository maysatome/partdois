//Do a routine that receives an array of type double
// and the number of values that must be requested to the user and returns the filled array with the values entered.

// Please use https://en.wikipedia.org/wiki/C_dynamic_memory_allocation

#include<stdio.h>
#include<stdlib.h>

void main(){

    int i;
    int user_length = 0;
    printf("Please, input the array length (length)");
    while(user_length < 1)
        scanf("%d",&user_length);

    int * array = malloc(user_length * sizeof(double));


  for (i = 0; i <user_length; i ++)
  {
    printf("input %d-th value : ", i+1);
    scanf("%d", &array[i]);

  }


 return;
}

/* THE OUTPUT


*/