// Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

/*
%с	one symbol _ one character
%d	Tipo inteiro decimal com um sinal.
%i	Tipo inteiro decimal com um sinal.
%е	scientific notation
%f	Número decimal de ponto flutuante.
%о	Um inteiro não assinado octal.
%s	Uma seqüência de caracteres.
%х	Um inteiro hexadecimal sem sinal (letra minúscula).
%Х	Um inteiro hexadecimal sem sinal (letra maiúscula)

for more information, please see at:
http://www.cplusplus.com/reference/cstdio/printf/
*/

#include <stdio.h>

int main ()

{
  int i = 21;
  printf ("Some different radices: %d %x %o %#x %#o \n", i, i, i, i, i);
  printf();
}
