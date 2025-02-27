// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
  int c= *a;
  *a=*b; 
  *b=c; 
    printf("Los valores intercambiados son:\n %i\n %i",*a, *b ); 
    

}

int main() {
    int arr[] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados 
    printf("Los valores originales son:\n"); 
    for (int i=0; i<2; i++){
        printf(" %i\n", arr[i]); // Imprimir sin cambio
    }
    intercambiar(&arr[0], &arr[1]);


    return 0;
}
