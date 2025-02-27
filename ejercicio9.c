// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    // Implementar la suma aquí
    int c= 0; 
    for (int i=0; i<tamaño; i++){ 
        c+=*(arr+i); 
    }
    printf(" %i\n", c);
    return 0;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma
    sumaArreglo(numeros,4); 
    return 0;
}
