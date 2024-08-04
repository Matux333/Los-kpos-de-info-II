#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct plano{

    int x,y;

}plano;


int main()
{
    int n, i, cont=0, b=0;
    float dis=0;

    printf("Indique la cantidad de puntos que desea guardar: ");
    scanf("%d", &n);

    plano puntos[n];

    printf("\n");

    for(i=0;i<n;i++){
    printf("\nPunto %d", i+1);
    printf("\n");
    printf("\nIngrese la ubicacion del punto en el eje de las x: ");
    scanf("%d", &puntos[i].x);
    printf("\nIngrese la ubicacion del punto en el eje de las y: ");
    scanf("%d", &puntos[i].y);
    printf("\n");
    }

    for(i=0;i<n;i++){
        if(puntos[i].x<0 && puntos[i].y>0){
            cont++;
        }
    }

    for(i=0;i<n;i++){
        if(puntos[i].x==0 && puntos[i].y==0){
            b=1;
        }
    }

    if(cont==0){
        printf("\n\n-No hay puntos en el segundo cuadrante");
    }else{
        printf("\n\n-Hay %d puntos en el segundo cuadrante", cont);
    }

    if(b==0){
        printf("\n-No hay punto/s en el origen de coordenadas");
    }else{
        printf("\n-Hay al menos un punto en el origen de coordenadas");
    }

    if(n<5){
        printf("\n-No se han cargado 5 puntos en el plano");
    }else{
        dis=sqrt(pow(puntos[4].x,2)+pow(puntos[4].y, 2));
        printf("\n-La distancia del 5to punto al origen es de %.2f", dis);
    }

    printf("\n");
    return 0;
}
