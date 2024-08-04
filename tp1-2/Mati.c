//Autor: Nievas Funes, Matías

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 30

int main(){

    int i=0, b=0, j=0, cont_letra=0, cont_vocal=0, contl=0, cont_5c=0;
    char cadena[n];

    printf("Ingrese una cadena de texto caracter a caracter y escriba %c%c%c para hacer un espacio, finalice ingresando un asterisco: \n", 34,45,34);

        for(i=0;i<n;i++){
        printf("\nIngrese el caracter[%d]: ", i);
        scanf("%s", &cadena[i]);
        if(cadena[i]==42)
        break;
        }

     printf("\n\n la cadena ingresada es: %s", cadena);

     for(i=0;i<n;i++){
        j++;
         if(cadena[i]==45){

            for(i=j;i<n;i++){
            	if(cadena[i]!=45){
            		cont_letra++;
            		}else{
            			b=1;
            			break;
            			}
                    }
                }
                if(b==1)
                break;
    }
	printf("\n\nLa segunda palabra tiene %d letra/s", cont_letra);

	for(i=0;i<n;i++){
        if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u' || cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O' || cadena[i]=='U'){
            cont_vocal++;
        }
	}

	printf("\n\nLa cadena tiene %d vocales", cont_vocal);

	for(i=0;i<n;i++){

        if(cadena[i]!=45){
            contl++;
        }else{
            if(contl>5){
                cont_5c++;
                contl=0;
            }else{
             contl=0;
            }
        }
	}

	for(i=0;i<n;i++){

        if(cadena[i]!=42){
            contl++;
        }else{
            if(contl>5){
                cont_5c++;
                contl=0;
            }else{
             contl=0;
            }
        }
	}

	printf("\n\nEn total hay %d palabra/s con mas de 5 caracteres", cont_5c);
    return 0;
}
