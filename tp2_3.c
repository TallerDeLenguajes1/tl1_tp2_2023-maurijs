#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main() {
int i,j;
int mt[N][M];
int *punt = mt;
srand(time(NULL));

for(i = 0;i<N; i++)
{
    for(j = 0;j<M; j++)
    {
    *punt[i][j]=(int)(1+rand()%100);
    printf("%f",punt[i][j]);
    }
printf(“\n”);
}
}