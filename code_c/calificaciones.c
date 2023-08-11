#include <stdio.h>
#include <stdlib.h>



int calificaciones()
{
    // Estructura para almacenar las materias
    typedef struct {
    char materia[50];
    float calificación;
    } Asignaturas;
    
    float prom = 0, suma = 0;
    
    int numAsignaturas;
    printf("\nIngrese el número de asignaturas que desea agregar: ");
    scanf("%d", &numAsignaturas);

    Asignaturas Asignatura[numAsignaturas];

    for (int i = 0; i < numAsignaturas; i++) {
        printf("\tMateria: ");
        scanf(" %[^\n]s", Asignatura[i].materia);
        printf("\tCalificacion: ");
        scanf("%f", &Asignatura[i].calificación);
    }

    for (int i = 0; i < numAsignaturas; i++) {
        suma += Asignatura[i].calificación;
    }

    prom = suma/numAsignaturas;
    
    return prom;
}