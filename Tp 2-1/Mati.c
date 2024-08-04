#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct datos{

    int dni, edad;
    float altura;

}datos;

typedef struct datos2{

    int dni, edad;
    float altura;
    char *nombre;

}datos2;

int main()
{
    //primera situación: al crear la estructura necesitamos variables de tipo int y float
    datos persona;

    persona.dni=2102121;
    persona.altura=1.80;
    persona.edad=25;



    //segunda situación: ademas de las variables creadas previamente, necesitamos un vector de caracteres (una cadena o string) para agregar el nombre

    datos2 persona2;

    persona2.dni=2102121;
    persona2.altura=1.80;
    persona2.edad=25;
    persona2.nombre="Eduardo"; //en este caso usamos un puntero (*nombre) para facilitar la asignacion;


    return 0;
}
