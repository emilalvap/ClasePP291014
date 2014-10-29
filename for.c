//Author: Emilio Alvarez Piñeiro

#include <omp.h>
#include <stdio.h>
int main(){

  int i,dato = 1;
#pragma omp parallel for firstprivate(dato) lastprivate(dato)
  for (i=0; i<8;i++){
    printf("dato=%i\n",dato);
    dato = i*i;
  }
  printf("dato = %i\n",dato);
}
