#include <stdio.h>
#include<stdlib.h>

void imprime_histograma(int *vendas[], int num_categorias);

int main()
{
  int nc;
  scanf("%d",&nc);

  int **vendas = (int**)malloc(sizeof(int*)*nc);

  for(int i = 0; i < nc; i++)
  {
    vendas[i] = (int*)malloc(sizeof(int));
    scanf("%d", vendas[i]);
  }

  printf("\nHistograma: \n");
  imprime_histograma(vendas, nc);

  for(int i = 0; i < nc; i++)
  {
    free(vendas[i]);
  }
  free(vendas);
}

void imprime_histograma(int *vendas[], int num_categorias)
{
  for(int i = 0; i < num_categorias; i++)
  {
    int vc = *vendas[i];
    printf("%d", vc);

    for(int k = 0; k < vc; k++)
    {
      printf("*");
    }

    printf("\n");
  }
}