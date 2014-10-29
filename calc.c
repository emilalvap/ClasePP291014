//Author: Emilio Alvarez Piñeiro

#include <omp.h>
#include <stdio.h>
double calc(int count);
int main(){
  int N=2000,i;
  double datos[N];
  double tiempo,runtime; 
  tiempo= omp_get_wtime();
#pragma omp parallel for schedule(guided)
  for(i=0;i<N;i++)
    datos[i]=calc(i);
  runtime =omp_get_wtime()-tiempo; 
  printf("tiempo: %f\n",runtime);
}

double calc(int count)
{
  int i;
  double d=1.0;
  for(i=0;i<count*count;i++)
	d+=d;
  return d;
}
