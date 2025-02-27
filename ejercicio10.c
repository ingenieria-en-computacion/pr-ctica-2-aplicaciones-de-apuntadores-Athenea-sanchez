// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí 
    for (int i = 0; i < tamaño - 1; i++) { 
        for (int j = 0; j < tamaño - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                // Intercambio de valores
                int e = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = e;
            }
        }
    }
}


int main() {
    int arr[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo
    printf("Arreglo original:\n");
    for (int i=0; i<5; i++){
        printf(" %i\n", arr[i]); // Imprimir sin cambio
    }

    ordenarBurbuja(arr, 5); 

    printf("Arreglo ordenado:\n");
    for (int i = 0; i <5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
