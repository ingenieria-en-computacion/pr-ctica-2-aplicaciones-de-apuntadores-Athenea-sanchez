#include <stdio.h>

int main () {
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t';
  
  //Escribe el código para imprimir las direcciones de c, d y e

  ap = &c; // el valor del apuntador es la direccion de memoria de c

  printf("Direccion de memoria de c: %d\n", ap);
  printf("Direccion de memoria de d: %d\n", &d);
  printf("Direccion de memoria de e: %d\n", &e);

  // imprime el carácter de la localidad a la que apunta
  printf("Caracter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Codigo ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Direccion de memoria: %d\n",ap);

  ap = &d;
  // imprime el carácter de la localidad a la que apunta
  printf("Caracter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Codigo ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

  ap = &e;
  // imprime el carácter de la localidad a la que apunta
  printf("Caracter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Codigo ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Direccion de memoria: %d\n",ap);

 return 0;
}
