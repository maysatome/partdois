//Do a routine that receives an array of type double
// and the number of values that must be requested to the user and returns the filled array with the values entered.

// Please use https://en.wikipedia.org/wiki/C_dynamic_memory_allocation

#include<stdio.h>
#include<stdlib.h>

void main(){

    int i;
    int user_length = 0;
    printf("Please, input the array length (length): ");
    while(user_length < 1)
        scanf("%d",&user_length);

    double * array = malloc(user_length * sizeof(double));


  for (i = 0; i <user_length; i ++)
  {
    printf("input %d-th value : ", i+1);
    scanf("%lf", &array[i]);

  }

    for (i = 0; i <user_length; i ++)
  {
    printf("%d-th value is : %lf\n", i+1,  array[i]);


  }

free(array);
 return;
}

/* THE OUTPUT
Please, input the array length (length): 5
input 1-th value : 1.2
input 2-th value : 2.1
input 3-th value : 3.1
input 4-th value : .22
input 5-th value : 5
1-th value is : 1.200000
2-th value is : 2.100000
3-th value is : 3.100000
4-th value is : 0.220000
5-th value is : 5.000000

*/