//Make a program in "C" that reads 10 values and prints the largest and smallest values read.
#include<stdio.h>

void main(){
  double container[10] = {0.0};
  int i;

  for (i = 0; i <10; i ++)
  {
    printf("input %d-th value : ", i+1);
    scanf("%lf", &container[i]);

  }

  double min = container[0];

  for (i = 1; i <10; i ++) if(container[i]<min) min=container[i];

  printf("The min value is %lf\n", min);


  double max = container[0];

  for (i = 1; i <10; i ++) if(container[i]>max) max=container[i];


  printf("The max value is %lf\n", max);

 return;
}

/* THE OUTPUT

gitpod /workspace/partdois $ ./vector_ex1
input 1-th value : 0
input 2-th value : .2
input 3-th value : 3.4
input 4-th value : 5
input 5-th value : 72.4
input 6-th value : 11
input 7-th value : 32
input 8-th value : 4
input 9-th value : 55.732
input 10-th value : 3.14
The min value is 0.000000
The max value is 72.400000
gitpod /workspace/partdois $

*/