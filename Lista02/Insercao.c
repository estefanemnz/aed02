#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = key;
    }
}

int main2() {
    int size, i;
    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int array[size];
    printf("Digite os elementos do array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    insertionSort(array, size);

    printf("\nArray ordenado: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
