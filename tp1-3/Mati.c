//Autor:Nievas Funes, Matías

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 51

int main()
{
    char cadena[n], cadena_cop[n];
    int i, b=0, tam=0;

    do{
    printf("\nIngrese una cadena de 50 caracteres y finalice con un punto: ");
    gets(cadena);
    if(strlen(cadena)>n)
        printf("\nPor favor ingrese una cadena de 50 caracteres o menos");

    b=0;

    for(i=0;i<n;i++){
        if(cadena[i]==46){
        b=1;
        break;
        }
    }

    if(b==1){
    strncpy(cadena_cop, cadena, i+1);
    }else{
        printf("\nIngresa un punto para que tu cadena sea valida");
    }

    }while(strlen(cadena)>n || b==0);


    tam=strlen(cadena_cop);

    printf("\n\nLa cantidad de caracteres en la cadena es de %d", tam);


    printf("\n\nCadena al derecho: %s", cadena_cop);

    printf("\n\nCadena al reves: ");

    for(i=0;i<tam;i++){
        printf("%c",cadena_cop[tam-i-1]);
    }

    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 51

void fleer(char cadena[]);
void fimpr1(char cadena[]);
void fimpr2(char cadena[], int tam);

int main()
{
    char cadena[n];

    fleer(cadena);

    return 0;
}

void fleer(char cadena[]){

    char cadena_cop[n];
    int i, b=0;

        do{
    printf("\nIngrese una cadena de 50 caracteres y finalice con un punto: ");
    gets(cadena);
    if(strlen(cadena)>n)
        printf("\nPor favor ingrese una cadena de 50 caracteres o menos");

    b=0;

    for(i=0;i<n;i++){
        if(cadena[i]==46){
        b=1;
        break;
        }
    }

    if(b==1){
    strncpy(cadena_cop, cadena, i+1);
    }else{
        printf("\nIngresa un punto para que tu cadena sea valida");
    }

    }while(strlen(cadena)>n || b==0);

    fimpr1(cadena_cop);

    return;
}


void fimpr1(char cadena[]){

    int tam=0;

    tam=strlen(cadena);

    printf("\n\nLa cantidad de caracteres en la cadena es de %d", tam);

    fimpr2(cadena, tam);

    return;
}

void fimpr2(char cadena[], int tam){

    int i;

    printf("\n\nCadena al derecho: %s", cadena);

    printf("\n\nCadena al reves: ");

    for(i=0;i<tam;i++){
        printf("%c",cadena[tam-i-1]);
    }

    return;
}
*/
