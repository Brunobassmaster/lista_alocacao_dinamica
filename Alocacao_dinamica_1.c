/*1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na
memória: char, int, float, double.1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na
memória: char, int, float, double.*/

#include <stdio.h>

int main()
  {
  printf("Tamanho do char: %zu bytes\n", sizeof(char));
  printf("Tamanho do int: %zu bytes\n", sizeof(int));
  printf("Tamanho do float: %zu bytes\n", sizeof(float));
  printf("Tamanho do double: %zu bytes\n", sizeof(double));
  return 0;
  }
