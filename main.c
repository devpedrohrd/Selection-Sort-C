#include <stdio.h>

void selectionSort(int vetor[], int tamanho)
{ // declaração de variaveis
    int i, j, min;

    for (i = 0; i < tamanho - 1; i++)
    {
        min = i;
        for (j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
}

int main()
{
    int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tamanho = sizeof(array) / sizeof(array[0]);

    selectionSort(array, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}