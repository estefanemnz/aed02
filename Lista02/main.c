#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int array[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int array[size];
    printf("Digite os elementos do array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array original: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    bubbleSort(array, size);

    printf("\nArray ordenado: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
