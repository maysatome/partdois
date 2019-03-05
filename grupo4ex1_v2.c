#include<stdio.h>

int mypowrec (int base, int pow){
  printf("(%d, %d)\n",base,pow);
  if (pow==0) return 1;
  return base*mypowrec(base,pow-1);
}

int main(){

    int n = 10, x = 2;

    printf("%d\n",mypowrec(x,n));

}

