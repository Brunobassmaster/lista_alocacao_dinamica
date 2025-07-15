#include <stdio.h>
#include <stdlib.h>

int *aloca_vetor(int n)
  {
  if (n <= 0)
    {
    return NULL;
    }

  int *vetor = (int *) malloc(n * sizeof(int));
  if (vetor == NULL)
    {
    printf("Erro de alocacao!\n");
    return NULL;
    }

  return vetor;
  }

int main()
  {
  int n;
  int *vetor;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  vetor = aloca_vetor(n);
  if (vetor == NULL)
    {
    printf("Vetor inválido ou erro de alocacao.\n");
    return 1;
    }

  printf("Vetor alocado com sucesso.\n");

  free(vetor);
  return 0;
  }

