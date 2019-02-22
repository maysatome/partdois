// Fazer um programa em "C" que solicite 2 números e informe:
// a) A soma dos números;
// b) O produto do primeiro número pelo quadrado do segundo;
// c) O quadrado do primeiro número;
// d) A raiz quadrada da soma dos quadrados;
// e) O seno da diferença do primeiro número pelo segundo;
// f) O módulo do primeiro número.

// http://www.cplusplus.com/reference/cmath/
// https://en.wikipedia.org/wiki/Order_of_operations
// https://www.geeksforgeeks.org/c-library-math-h-functions/

#include <stdio.h>
#include<math.h>

int main ()
{
double a,b;

printf("first number: \n");
scanf("%lf",&a);
printf("second number: \n");
scanf("%lf",&b);

double tmp_res = a+b;
printf("(a) The sum is %lf\n", tmp_res);

tmp_res = a*pow(b,2);
printf("(b) The result is %lf\n", tmp_res);

tmp_res = pow(a,2);
printf("(c) The result is %lf\n", tmp_res);

tmp_res = sqrt(pow(a,2)+pow(b,2));
printf("(d) The result is %lf\n", tmp_res);

tmp_res = sin(a-b);
printf("(e) The result is %lf\n", tmp_res);

tmp_res = fabs(a);
printf("(f) The result is %lf\n", tmp_res);

return 0;
}

/*
gitpod /workspace/partdois $ gcc prog05.c -o prog05 -lm
gitpod /workspace/partdois $ ./prog05
first number:
1.2
second number:
2.3
(a) The sum is 3.500000
(b) The result is 6.348000
(c) The result is 1.440000
(d) The result is 2.594224
(e) The result is -0.891207
(f) The result is 1.200000
gitpod /workspace/partdois $
*/
