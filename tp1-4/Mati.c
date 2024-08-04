#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fdia(char fecha_dia[15]);
int fmes(char fecha_mes[15]);
int fanio(char fecha_anio[15]);
int val_fecha(int dia, int mes, int anio);
void string_mes(int dia, int mes, int anio);
void fecha_esc(int dia, char mes[11], int anio);

int main(){

    char fecha_num[15];
    int dia, mes, anio, b;
    do{
    printf("Ingrese una fecha en formato DD/MM/AAAA: ");
    gets(fecha_num);
    dia = fdia(fecha_num);
    mes = fmes(fecha_num);
    anio = fanio(fecha_num);
    b=val_fecha(dia, mes, anio);

    if(b==1)
        printf("Ingrese una fecha valida\n\n");

    if(b==0)
    string_mes(dia, mes, anio);
    }while(b==1);

    return 0;
}

int fdia(char fecha_dia[15]){

    int i, dia;
    char dia_num[15];
    for(i=0;i<15;i++){
        if(fecha_dia[i]=='/'){
            break;
        }
    }

    strncpy(dia_num, fecha_dia, i);

    dia = atoi(dia_num);

    return dia;
}

int fmes(char fecha_mes[15]){

    int i, j, mes;
    char mes_num[15], mes_esc[11];
    for(i=0;i<15;i++){
        if(fecha_mes[i]=='/'){
            for(j=0;j<2;j++){
                mes_num[j] = fecha_mes[i+1];
                i++;
            }
            break;
        }
    }
    if(mes_num[0]=='/'){
        mes_num[0] = mes_num[1];
        mes_num[1] = '\0';
    }

    if(mes_num[1]=='/'){
        mes_num[1] = '\0';
    }

    mes = atoi(mes_num);

    return mes;
}

int fanio(char fecha_anio[15]){
    int i, j, cont=0, anio;
    char anio_num[4];

    for(i=0;i<15;i++){
        if(fecha_anio[i]=='/'){
            cont++;
        }

         if(cont==2){
            for(j=0;j<4;j++){
            anio_num[j] = fecha_anio[i+1];
            i++;
            cont++;
            if(cont==6)
            break;
            }
         }
        }

    anio = atoi(anio_num);

    return anio;
}

int val_fecha(int dia, int mes, int anio){

    int b=0;

    if(dia<1 || dia>31)
        b=1;
    if(mes<1 || mes>12)
        b=1;
    if(anio<1)
        b=1;
    if(mes==4 || mes==6 || mes==9 || mes==11){
        if(dia==31)
            b=1;
    }

    if(mes==2){
        if(dia>28)
            b=1;
    }

return b;
}

void string_mes(int dia, int mes, int anio){

    char mes_esc[12];

    switch(mes){

    case 1:
            strcpy(mes_esc, "Enero");
            break;
    case 2:
            strcpy(mes_esc, "Febrero");
            break;
    case 3:
            strcpy(mes_esc, "Marzo");
            break;
    case 4:
            strcpy(mes_esc, "Abril");
            break;
    case 5:
            strcpy(mes_esc, "Mayo");
            break;
    case 6:
            strcpy(mes_esc, "Junio");
            break;
    case 7:
            strcpy(mes_esc, "Julio");
            break;
    case 8:
            strcpy(mes_esc, "Agosto");
            break;
    case 9:
            strcpy(mes_esc, "Septiembre");
            break;
    case 10:
            strcpy(mes_esc, "Octubre");
            break;
    case 11:
            strcpy(mes_esc, "Noviembre");
            break;
    case 12:
            strcpy(mes_esc, "Diciembre");
            break;

    }
    fecha_esc(dia, mes_esc, anio);

    return;
}

void fecha_esc(int dia, char mes[11], int anio){

    char fecha[40];
    char dia_esc[3];
    char anio_esc[5];

    itoa(dia, dia_esc, 10);
    itoa(anio, anio_esc, 10);

    strcpy(fecha, dia_esc);
    strcat(fecha, " de ");
    strcat(fecha, mes);
    strcat(fecha, " de ");
    strcat(fecha, anio_esc);

    printf("\n%s", fecha);

return;
}
