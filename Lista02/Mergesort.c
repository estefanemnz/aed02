#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    int mergedSize = leftSize + rightSize;
    int merged[mergedSize];

    // Mescla os elementos em ordem crescente
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            merged[k] = left[i];
            i++;
        } else {
            merged[k] = right[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes do subvetor esquerdo, se houver
    while (i < leftSize) {
        merged[k] = left[i];
        i++;
        k++;
    }

    // Copia os elementos restantes do subvetor direito, se houver
    while (j < rightSize) {
        merged[k] = right[j];
        j++;
        k++;
    }

    // Copia os elementos mesclados de volta para o vetor original
    for (int m = 0; m < mergedSize; m++) {
        arr[m] = merged[m];
    }
}

// Função de ordenação mergesort recursiva
void mergeSort(int arr[], int size) {
    if (size <= 1)
        return;

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    // Divide o vetor em dois subvetores
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    // Chama a função de ordenação para os subvetores esquerdo e direito
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Mescla os subvetores ordenados
    merge(arr, left, mid, right, size - mid);
}

// Função para exibir o vetor
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main04() {
    int size;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    int arr[size];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Vetor original: ");
    displayArray(arr, size);

    mergeSort(arr, size);

    printf("Vetor ordenado: ");
    displayArray(arr, size);

    return 0;
}

