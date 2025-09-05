#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nombre;
    char *apellido;
    unsigned int edad : 7;
    unsigned int id   : 16;
    float *calificaciones;
    size_t num_materias;
} Estudiante;

Estudiante *crearEstudiante(const char *nombre, const char *apellido,
                            unsigned int edad, unsigned int id,
                            const float *califs, size_t n_materias) {
    Estudiante *est = malloc(sizeof(Estudiante));
    est->nombre = strdup(nombre);
    est->apellido = strdup(apellido);
    est->edad = edad;
    est->id = id;
    est->num_materias = n_materias;
    est->calificaciones = malloc(sizeof(float) * n_materias);
    for (size_t i = 0; i < n_materias; i++) est->calificaciones[i] = califs[i];
    return est;
}

void mostrarEstudiante(const Estudiante *est) {
    printf("ID: %u\n", est->id);
    printf("Nombre: %s %s\n", est->nombre, est->apellido);
    printf("Edad: %u\n", est->edad);
    printf("Calificaciones: ");
    for (size_t i = 0; i < est->num_materias; i++) printf("%.2f ", est->calificaciones[i]);
    printf("\n");
}

void eliminarEstudiante(Estudiante *est) {
    free(est->nombre);
    free(est->apellido);
    free(est->calificaciones);
    free(est);
}

int main(void) {
    float califsJuan[] = {4.5, 3.8, 5.0};
    Estudiante *juan = crearEstudiante("Juan", "Perez", 20, 12345, califsJuan, 3);
    mostrarEstudiante(juan);
    eliminarEstudiante(juan);
    return 0;
}
