#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 6

int main()
{
    int i, j;
    int mt[N][M];
    int *punt;
    punt = &mt[0][0];
    srand(time(NULL));

    for (i = 0; i < N ; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *punt = 1 + rand() % 100;
            printf("   mt[%d][%d]= %d   ",i,j,*punt);
            punt++;
        }
        punt++;
        printf("\n-----------------------------\n");
    }
}
// si por ejemplo tengo una matriz m[F][C]
// int*p = &mt[0][0];
// para obtener el elemento mt[n][m] con el puntero aplico la formula
// mt[n][m] == *(p+col*n+m) con esta formula llegamos a la ubicacion del elemento mt[n][m]
//