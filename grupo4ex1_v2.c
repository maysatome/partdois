#include<stdio.h>

mypowrec (int base, int pow){
  if (pow==2) return 1;
  return base*mypowrec(base,pow-1)
}
int main(){

int n = 10, x = 2;
int i;

mypowrec(x,n);

}

