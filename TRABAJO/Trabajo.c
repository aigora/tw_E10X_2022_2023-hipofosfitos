#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#define NUMERO_TECNOLOGIAS 17
#define LONGITUD_MAXIMA_LINEA 1000

typedef struct 
{
    char tecnologia[100];
    double valores2021[12];
    double valores2022[12];
} LineaFichero;

//Prototipos de funciones
void identificarse();


int main(int argc, char *argv[]) 
{
    //El usuario se registra

    identificarse();
    printf("\n");

    FILE *fichero = fopen("/Users/luciarcoss/Desktop/generacion_por_tecnologias_21_22_puntos_simplificado.csv", "r");
    if (fichero == NULL) 
    {
        printf("Fallo al leer fichero csv.\n");
        return 1;
    }

    LineaFichero lineas[17];
    int fila = 0;
    char encabezados[LONGITUD_MAXIMA_LINEA];
    // saltar primera linea de encabezados;
    fscanf(fichero, "%s\n", encabezados);

    do 
    {
        fscanf(fichero, "%60[^,],%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf\n",
            lineas[fila].tecnologia,
            &lineas[fila].valores2021[0], 
            &lineas[fila].valores2021[1],
            &lineas[fila].valores2021[2],
            &lineas[fila].valores2021[3],
            &lineas[fila].valores2021[4],
            &lineas[fila].valores2021[5],
            &lineas[fila].valores2021[6],
            &lineas[fila].valores2021[7],
            &lineas[fila].valores2021[8],
            &lineas[fila].valores2021[9],
            &lineas[fila].valores2021[10],
            &lineas[fila].valores2021[11],
            &lineas[fila].valores2022[0], 
            &lineas[fila].valores2022[1],
            &lineas[fila].valores2022[2],
            &lineas[fila].valores2022[3],
            &lineas[fila].valores2022[4],
            &lineas[fila].valores2022[5],
            &lineas[fila].valores2022[6],
            &lineas[fila].valores2022[7],
            &lineas[fila].valores2022[8],
            &lineas[fila].valores2022[9],
            &lineas[fila].valores2022[10],
            &lineas[fila].valores2022[11]
        );

        fila++;
    } 
    while(!feof(fichero));
    fclose(fichero);
return 0;
}

//Funciones:

void identificarse()
{
    char nombre[50];
    char contrasena[50];
    bool identificado = false;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese su usuario:\n");
        scanf("%s", nombre);

        printf("Ingrese su contraseña:\n");
        scanf("%s", contrasena);

        if (strcmp(nombre, "Hipofosfito") == 0 && strcmp(contrasena, "12345") == 0)
        {
            printf("Identificación exitosa. ¡Bienvenido, %s!\n", nombre);
            identificado = true;
            break;
        }
        else
        {
            printf("Identificación fallida. Usuario o contraseña incorrectos. Dispones de %d intentos más para registrarte.\n", 9 - i);
        }
    }

    if (!identificado)
    {
        printf("Agotaste todos tus intentos. Identificación fallida.\n");
    }
}
