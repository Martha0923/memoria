#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main (){
	int done = FALSE; // Establece done como cero
	int j=0; // empezar contador de salida como j=0

	while(!done) {
		int n = 10;// numero de iteraciones
		int *a = (int*)malloc(n * sizeof(int)); // se establace el tamaño de la matriz usando malloc

		int i;
		for (i=0; 1<n; i++) //establece el valor i al puntero asignado dinamicamente
			a[i]=i;
		j++;
		printf("%d\n",j); // Imprime los valores de lo que ejecuta while
		free(a); // liberar memoria

		if (!a) {
			perror (NULL);
			exit(1);
		}
	        }
	        
		return 0;
}
