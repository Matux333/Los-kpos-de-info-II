#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 50

typedef struct producto{

    int codigo, cantidad;
    char descripcion[n];
    float precio, precio_venta;

}producto;


int main()
{

    producto lista;

    printf("Ingrese la descripcion del producto: ");
    fgets(lista.descripcion, n, stdin);

    do{
    printf("\nIngrese el codigo del producto: ");
    scanf("%d", &lista.codigo);

    if(lista.codigo<0){
        printf("\nIngrese un codigo valido");
    }
    }while(lista.codigo<0);

    do{
    printf("\nIngrese el precio unitario del producto: ");
    scanf("%f", &lista.precio);

    if(lista.precio<0){
        printf("\nIngrese un precio valido");
    }
    }while(lista.precio<0);

    do{

    printf("\nIngrese la cantidad del producto: ");
    scanf("%d", &lista.cantidad);

    if(lista.cantidad<0){
        printf("\nIngrese una cantidad valida");
    }

    }while(lista.cantidad<0);

    lista.precio_venta=lista.cantidad*lista.precio;

    printf("\n\nCodigo del producto: %d", lista.codigo);
    printf("\nDescripcion del producto: %s", lista.descripcion);
    printf("Precio de venta: $%.2f", lista.precio_venta);

    return 0;
}
