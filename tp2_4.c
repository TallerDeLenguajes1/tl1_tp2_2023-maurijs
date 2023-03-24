#include <stdio.h>
#include <unistd.h>
#define CANT 5

char tipos[6][10] = {"intel","amd", "celeron","athlon","core","pentium"};

struct datos{
    int velocidad;
    int    anio;
    int cantidad;
    char *tipo_cpu;
};

typedef struct datos compu;


void mostrar(compu *computadoras);
void masVieja(compu *computadoras);
void mayorVelocidad(compu *computadoras);

int main() {
    // compu computadoras[5]={(veloc1, anio1, cant1, tipos[0]), (veloc2, anio2, cant2, tipos[2]), (veloc2, anio3, cant3, tipos[4]),  (veloc1, anio4, cant4, tipos[1]), (veloc3, anio5, cant5, tipos[3])};
    compu compu1 = {1,2018,4,tipos[0]};
    compu compu2 = {2,2015,6,tipos[1]};
    compu compu3 = {2,2023,7,tipos[2]};
    compu compu4 = {2,2020,1,tipos[3]};
    compu compu5 = {3,2021,3,tipos[4]};
    compu computadoras[5]= {compu1, compu2, compu3, compu4, compu5};
    mostrar(computadoras);
    masVieja(computadoras);
    mayorVelocidad(computadoras);
    return 0;
}

//DECLARACION DE FUNCIONES

void mostrar(compu *computadoras)
{
    printf("Inicio de mostrar\n");
    for (int i = 0; i < CANT; i++)
    {
        printf("\nCompu %d:\n", i + 1);
        sleep(1);
        printf("\nVelocidad:%d\nAnio de fabricacion:%d\nCantidad:%d\nTipo CPU:%s\n", computadoras->velocidad, computadoras->anio, computadoras->cantidad,computadoras->tipo_cpu);
        computadoras++;
        printf("-----------------");
        sleep(1);
    }
}

void masVieja(compu *computadoras)
{
    printf("\n Inicio funcion masVieja\n");
    sleep(1);
    compu *masVieja = computadoras;
    for (int i = 0; i < CANT-1; i++)
    {
        if (computadoras[i].anio < masVieja->anio )
        {
            masVieja = &(computadoras[i]);
        }
    }
    printf("\nLa computadora mas vieja es del anio: %d\n", masVieja->anio);
    sleep(1);
}

void mayorVelocidad(compu *computadoras)
{
    printf("\n Inicio funcion mayorVelocidad\n");
    sleep(1);
    compu *masRapida = computadoras;
    int numCompu;
    for (int i = 0; i <= CANT-1; i++)
    {
        sleep(1);
        printf("\nvelocidad compu %d: %d vs velocidad compu mas rapida: %d?\n", i, computadoras[i].velocidad, masRapida->velocidad );
        if (computadoras[i].velocidad > masRapida->velocidad ) {
            masRapida = &(computadoras[i]);
            numCompu = i+1;
            printf("\nLa compu %d es mas rapida su velocidad es: %d\n",i,masRapida->velocidad);
        } 
    }
    sleep(1);
    printf("\nLa computadora mas rapida es la %d y tiene una velocidad igual a: %d\n",numCompu, masRapida->velocidad);
}