// codigo a completar
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
}

