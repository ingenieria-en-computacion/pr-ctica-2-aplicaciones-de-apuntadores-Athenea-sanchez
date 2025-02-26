#include<stdio.h>


void pasarValor(int); // prototipos me dice que retorna y el tipo de dato que recibe, pero no dice que hace
void pasarReferencia(int *);


int main(){
  int nums[] = {55,44,33,22,11};
  int *ap, cont;
  ap = nums;// ap recibe la direccion del primer elemento del arreglo
  
  printf("Pasar valor: %d\n", *ap); // imprime el contenido del primer elemnto del arrglo, 55
  pasarValor(*ap);// imprime otra vez 55 y 128 
  printf("Pasar referencia: %d\n", *ap);// imprime 55 ya que el valor de 128 solo se dio en void de *ap
  pasarReferencia(ap);//Se pasa num [0], imprime 55 y 128, hace que nums[0] sea 128
  printf("Valor final: %d\n", *ap);// el valor de 128
  return 0;
}


void pasarValor(int equis){
  printf("%d\n", equis); // imprime el 55 que teniamos en ap
  equis = 128;// hace que la copia de ap, ahora llamada equis sea 128
  printf("%d\n", equis);// imprime 128
}

void pasarReferencia(int *equis){ //Todo lo que pasemos por un apuntador-> referencia
  printf("%d\n", *equis);//  imprime el valor al que apunta equis (nums[0]), que es 55
  *equis = 128;//cambia nums[0] de 55 a 128
  printf("%d\n", *equis);// imprime a nums[0] 128
}