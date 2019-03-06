//Make a program in "C" that reads 10 values and prints the largest and smallest values read.
#include<stdio.h>

void main(){
  double container[10] = {0.0};
  in iterator;
  
  for (iterator = 0; iterator <10; iterator ++)
  {
    printf("input %d-th value : ", iterator);
    scanf("%lf", &container[i]);
  
  }
  
  double min = container[0];
  
  for (iterator = 1; iterator <10; iterator ++) container[i]<min?min=container[i];
  
  printf("The min value is %lf\n", min);
    
 
  double max = container[0];
  
  for (iterator = 1; iterator <10; iterator ++) container[i]>max?max=container[i];
 

  printf("The max value is %lf\n", max);
 
 return;
}
