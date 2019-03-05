#include<stdio.h>

double soma      (double s1, double s2)   {return s1+s2;}
double subtracao (double s1, double s2)   {return s1-s2;}

int main(){

  double n1 = 10.7, n2 = 5.3;

  printf("first %.4lf second %.4lf soma is %.4lf\n",n1,n2,soma(n1,n2));
  printf("first %.4lf second %.4lf subtracao is %.4lf\n",n1,n2,subtracao(n1,n2));
  return 0;
}
