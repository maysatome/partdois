// Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

/*
%с	one symbol _ one character
%d	Tipo inteiro decimal com um sinal.
%f	Número decimal de ponto flutuante.
%о	Um inteiro não assinado octal.
%s	Uma seqüência de caracteres.
%х	Um inteiro hexadecimal sem sinal (letra minúscula).

for more information, please see at:
http://www.cplusplus.com/reference/cstdio/printf/
*/

#include <stdio.h>

int main ()
{
  int i = 21;
  printf ("Some different radices: %d %x %o %#x %#o \n", i, i, i, i, i);
  return 0;
}

/* THE OUTPUT OF THE PROGRAM
Some different radices: 21 15 25 0x15 025
*/