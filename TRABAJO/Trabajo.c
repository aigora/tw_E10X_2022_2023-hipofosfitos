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
void imprimirDatosMaximoPorAnio(LineaFichero* lineas, int numLineas);
void ordenarAlfabeticamentePorTecnologia(LineaFichero* lineas, int numLineas);
void imprimirAlfabeticamentePorTecnologia(LineaFichero* lineas, int numLineas);


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
    int opcion;

    do 
    {
        printf("Bienvenido al sistema.\n");
	    printf("Disponemos de los datos de generacion de:\n");
        printf("\n");
        printf("1. Datos máximos por año\n");
        printf("2. Alfabéticamente por tecnología\n");
        printf("3. Ordenado de mayor a menor\n");
        printf("4. Calcular media por año\n");
        printf("0. Salir\n");
        printf("\n");
        printf("Seleccione una opción:\n");


        scanf("%d", &opcion);

        switch (opcion) 
        {
            case 1:
                imprimirDatosMaximoPorAnio(lineas, NUMERO_TECNOLOGIAS);
                break;
            case 2:
                imprimirAlfabeticamentePorTecnologia(lineas, NUMERO_TECNOLOGIAS);
                break;
            case 3:
                imprimirOrdenadoDeMayorAMenor(lineas, NUMERO_TECNOLOGIAS);
                break;
            case 4:
                calcularMediaPorAnio(lineas, NUMERO_TECNOLOGIAS);
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
    } 
    while (opcion != 0);

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

void imprimirDatosMaximoPorAnio(LineaFichero* lineas, int numLineas) 
{
    FILE* archivo = fopen("datos_maximos_por_anio.txt", "w");
    if (archivo == NULL) 
    {
        printf("Error al abrir el archivo para escribir.\n");
        return;
    }

    for (int i = 0; i < numLineas; i++) 
    {
        double max2021 = lineas[i].valores2021[0];
        double max2022 = lineas[i].valores2022[0];

        for (int j = 1; j < 12; j++) 
        {
            if (lineas[i].valores2021[j] > max2021)
                max2021 = lineas[i].valores2021[j];

            if (lineas[i].valores2022[j] > max2022)
                max2022 = lineas[i].valores2022[j];
        }

        fprintf(archivo, "%s - Máximo 2021: %lf, Máximo 2022: %lf\n", lineas[i].tecnologia, max2021, max2022);
    }

    fclose(archivo);
    printf("Los datos máximos por año han sido volcados en el archivo 'datos_maximos_por_anio.txt'.\n");
}

void ordenarAlfabeticamentePorTecnologia(LineaFichero* lineas, int numLineas) 
{
    for (int i = 0; i < numLineas - 1; i++) 
    {
        for (int j = 0; j < numLineas - i - 1; j++) 
        {
            if (strcmp(lineas[j].tecnologia, lineas[j + 1].tecnologia) > 0) 
            {
                LineaFichero temp = lineas[j];
                lineas[j] = lineas[j + 1];
                lineas[j + 1] = temp;
            }
        }
    }
}

void imprimirAlfabeticamentePorTecnologia(LineaFichero* lineas, int numLineas) 
{
    ordenarAlfabeticamentePorTecnologia(lineas, numLineas);

    FILE* archivo = fopen("orden_alfabetico_por_tecnologia.txt", "w");
    if (archivo == NULL) 
    {
        printf("Error al abrir el archivo para escribir.\n");
        return;
    }

    for (int i = 0; i < numLineas; i++) 
    {
        fprintf(archivo, "%s %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
            lineas[i].tecnologia,
            lineas[i].valores2021[0], 
            lineas[i].valores2021[1],
            lineas[i].valores2021[2],
            lineas[i].valores2021[3],
            lineas[i].valores2021[4],
            lineas[i].valores2021[5],
            lineas[i].valores2021[6],
            lineas[i].valores2021[7],
            lineas[i].valores2021[8],
            lineas[i].valores2021[9],
            lineas[i].valores2021[10],
            lineas[i].valores2021[11],
            lineas[i].valores2022[0], 
            lineas[i].valores2022[1],
            lineas[i].valores2022[2],
            lineas[i].valores2022[3],
            lineas[i].valores2022[4],
            lineas[i].valores2022[5],
            lineas[i].valores2022[6],
            lineas[i].valores2022[7],
            lineas[i].valores2022[8],
            lineas[i].valores2022[9],
            lineas[i].valores2022[10],
            lineas[i].valores2022[11]);
    }

    fclose(archivo);
    printf("Los datos ordenados alfabéticamente por tecnología han sido volcados en el archivo 'orden_alfabetico_por_tecnologia.txt'.\n");
}
