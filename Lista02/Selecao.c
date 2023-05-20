#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[], int size) {
    int i, j, minIndex, temp;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main03() {
    int size, i;
    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int array[size];
    printf("Digite os elementos do array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    selectionSort(array, size);

    printf("\nArray ordenado: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
