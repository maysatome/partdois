#include<stdio.h>

int main(){

int n = 10, x = 2;
int i;

for (i = 2; i<=n; i++)
{
    x*=2;
    printf("%d ^ %d = %d\n",2,i,x);
}

}
