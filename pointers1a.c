#include<stdio.h>
// the code execution visualisation
// http://pythontutor.com/c.html#mode=display

void main()
{
int a,b,*c;
a = 3;
b = 4;
c = &a;
b++;
*c = a+2;
printf("%d %d",a,b);
}
