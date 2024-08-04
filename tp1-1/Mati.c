//Autor: Nievas Funes, Matías

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 30

int main()
{
    int i=0,j=0, b=0, cont_letra=0, cont_a=0, cont_la=0, cont_pal=1, cont_sm=0, cont_carac=0, cont_esp=0;
    char cadena[n], vec_pal[n];

    printf("Ingrese una cadena de texto caracter a caracter y escriba %c%c%c para hacer un espacio, finalice ingresando un punto: \n", 34,45,34);

        for(i=0;i<n;i++){
        printf("\nIngrese el caracter[%d]: ", i);
        scanf("%s", &cadena[i]);
        if(cadena[i]==46)
        break;
        }

     printf("\n\n la cadena ingresada es: \n%s", cadena);

     for(i=0;i<cadena[i];i++){
        if(cadena[i]!=45 && cadena[i]!=46){
            cont_letra++;
        }
     }

     printf("\n\nLa cantidad de letra/s ingresada/s sin tener en cuenta espacios es de %d", cont_letra);

    for(i=0;i<n;i++){
        if(cadena[i]==97){
            cont_a++;
        }
    }

    printf("\n\nEn total hay %d letra/s a", cont_a);

     for(i=0;i<n;i++){
        if(cadena[i]==108){
        if(cadena[i+1]==97){
            cont_la++;
        }
        }
     }
    printf("\n\nEn total hay %d silaba/s la", cont_la);

    for(i=0;i<n;i++){
        if(cadena[i]==45){
            cont_pal++;
        }
    }

    printf("\n\nEn total hay %d palabra/s", cont_pal);

    for(i=0;i<n;i++){
        if(i==0){
        if(cadena[i]==115 || cadena[i]==109){
            cont_sm++;
        }
        }
        if(cadena[i]==45){
            if(cadena[i+1]==115 || cadena[i+1]==109){
                cont_sm++;
            }
        }
    }

    printf("\n\nEn total hay %d palabra/s que comienzan con s o m", cont_sm);

    for(i=0;i<n;i++){
        if(cadena[i]!=45){
            cont_carac++;
        }
        if(cadena[i]==45)
        break;
    }

    strncpy(vec_pal, cadena, cont_carac);

    printf("\n\nLa primera palabra es %s", vec_pal);


    for(i=0;i<n;i++){
        if(cadena[i]==45)
            cont_esp++;
    }

    printf("\n\nLa ultima palabra es ");

    for(i=0;i<n;i++){
        if(cadena[i]==45){
            j++;
            if(j==cont_esp){
                for(i=i+1;i<n;i++){
                printf("%c", cadena[i]);
                }
            }
        }
    }

    printf("\n\nLa segunda palabra es ");

    j=0;

    for(i=0;i<n;i++){
        j++;
         if(cadena[i]==45){

            for(i=j;i<n;i++){
            	if(cadena[i]!=45){
            		printf("%c", cadena[i]);
            		}else{
            			b=1;
            			break;
            			}
                    }
                }
                if(b==1)
                break;
    }

    return 0;
}

