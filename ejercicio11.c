// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i=0; i<tamaño; i++){
        if (*(arr+i)==valor){
            printf("Elemento encontrado en la posicion: %x",(arr+i)); 
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    *buscarElemento(arr, 5,40); 
    printf("\nConfirmacion de funcionamiento, posicion: %x", &arr[3]);
    return 0;
}
