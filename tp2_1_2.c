// codigo a completar
//correccion para usar punteros
//elimine la rama Opcion_2 dado q al cambia entre ramas se eliminaban los archivos de mi carpeta, por lo que cree opcion2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
int i;
srand(time(NULL));
double vt[N];
double *punt = vt;
for(i = 0; i<N ; i++)
{
    *punt = (double)(1 + rand() % 100);
    printf("%f\n", *punt);
    punt++;
}
int x;
int y;
return 0; ///cambios para hacer merge
}

