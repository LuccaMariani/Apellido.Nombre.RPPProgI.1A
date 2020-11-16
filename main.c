#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int),
recuperados(int) y muertos(int). Desarrollar una función llamada actualizarMuertos que reciba el país
 y los muertos del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada. *

2. Crear una función que se llame quitarVocales que reciba una cadena
de caracteres como parámetro y su responsabilidad es eliminar los caracteres
que sean vocales de la misma. Ejemplo si le pasamos "democracia" la deja como "dmcrc" *


3. Crear una función que se llame ordenarCaracteres que reciba una cadena
 de caracteres como parámetro y su responsabilidad es ordenarlos caracteres
  de manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo"
  la deja como "agilmoort" *

*/

typedef struct{

int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;

}ePais;

void actualizarMuertos(char* pais, int* muertosDia);
void ordenarCaracteres(char* cadenaCaracteres);
void quitarVocales(char* cadenaCaracteres);


int main()
{

    ePais pais;
    int muertosDia=0;

    char string[50];
    char string2[50];



    //actualizarMuertos(&pais, muertosDia);




    printf("\n\n2. Ingrese la cadena a la cual se le ordenaran los caracteres.\n >",string);
    gets(string);
    ordenarCaracteres(string);
    printf("\nResultado: %s",string);

    printf("\n\n3. Ingrese la cadena a la cual se le borraran las vocales.\n >",string);
    gets(string2);
    quitarVocales(string2);
    printf("\nResultado: %s",string2);


    return 0;

}
/*
void actualizarMuertos(char* pais, int* muertosDia)
{
    pais->muertos= muertosDia+pais->muertos;
}*/

void ordenarCaracteres(char* cadenaCaracteres)
{
    char caracterAuxiliar;

    for(int i=0; i <strlen(cadenaCaracteres) -1 ; i++)
    {
        for(int j=i+1; j<strlen(cadenaCaracteres); j++)
        {
            if (cadenaCaracteres[j]<cadenaCaracteres[i])
            {
                caracterAuxiliar=cadenaCaracteres[i];
                cadenaCaracteres[i]=cadenaCaracteres[j];
                cadenaCaracteres[j]=caracterAuxiliar;
            }
        }
    }

}

void quitarVocales(char* cadenaCaracteres)
{
    char caracterAuxiliar;
    int i=0;

    while(cadenaCaracteres[i]!= '\0')
    {
        i++;
        if ((cadenaCaracteres[i]=='a') || (cadenaCaracteres[i]=='e') || (cadenaCaracteres[i]=='i') || (cadenaCaracteres[i]=='o') || (cadenaCaracteres[i]=='u') || (cadenaCaracteres[i]=='A') || (cadenaCaracteres[i]=='E') || (cadenaCaracteres[i]=='I') || (cadenaCaracteres[i]=='O') || (cadenaCaracteres[i]=='U') )
        {
            cadenaCaracteres[i]=' ';
        }
    }
    for(int i=0; i < strlen(cadenaCaracteres) -1 ; i++)
    {
        for(int j=i+1; j<strlen(cadenaCaracteres); j++)
        {
            if (cadenaCaracteres[i]==' ')
            {
                caracterAuxiliar=cadenaCaracteres[i];
                cadenaCaracteres[i]=cadenaCaracteres[j];
                cadenaCaracteres[j]=caracterAuxiliar;
            }
        }
    }
}
