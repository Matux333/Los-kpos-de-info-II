#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 50

typedef struct producto{

    char descripcion[n];
    int cantidad, codigo;
    float precio, precio_venta;

}producto;

int main()
{
    int c, i, caro=0, codigo=0, largo=0;
    char descripcion[n];

    printf("Ingrese la cantidad de productos a cargar: ");
    scanf("%d", &c);

    producto stock[c];

    for(i=0;i<c;i++){
        printf("\n");
        getchar();
        printf("\nIngrese la descripcion del producto: ");
        fgets(stock[i].descripcion, n, stdin);

        do{
            printf("Ingrese el precio del producto: ");
            scanf("%f", &stock[i].precio);

            if(stock[i].precio<0){
                printf("\nIngrese un precio valido\n");
            }

        }while(stock[i].precio<0);


        do{
            printf("Ingrese la cantidad del producto: ");
            scanf("%f", &stock[i].cantidad);

            if(stock[i].cantidad<0){
                printf("\nIngrese una cantidad valida\n");
            }

        }while(stock[i].cantidad<0);

        stock[i].precio_venta=stock[i].cantidad*stock[i].precio;

        stock[i].codigo=i+1;

    }


    for(i=0;i<c;i++){
        if(stock[i].cantidad>caro){
            caro=stock[i].cantidad;
            codigo=stock[i].codigo;
        }
    }

    printf("\n");
    printf("\nEl producto %d tiene el mayor stock", codigo);

    for(i=0;i<c;i++){
        if(strlen(stock[i].descripcion)>largo){
            largo=strlen(stock[i].descripcion);
            codigo=stock[i].codigo;
        }
    }

    printf("\n");
    printf("\nEl producto %d tiene la descripcion mas larga", codigo);

    caro=0;

    for(i=0;i<c;i++){
        if(stock[i].precio_venta>caro){
            caro=stock[i].precio_venta;
            strcpy(descripcion, stock[i].descripcion);
        }
    }

    printf("\n");
    printf("\nEl producto %s tiene el mayor precio de venta", descripcion);

    return 0;
}
