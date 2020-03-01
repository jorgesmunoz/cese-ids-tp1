# Trabajo Practico Numero 1

Repositorio inicial para el Trabajo Practico 1 de la asignatura de Ingenieria de Software

## Primera Parte

1. Clonar este repositorio en su computadora y desplegar la rama *master*.

2. Agregar al archivo alumnos una funcion que serialice sus datos personales similar a la del siguiente ejemplo. La declaración y la definición de la funcion debe agregarse abajo de las existentes.

    ```c
    bool EstebanVolentini(char * cadena, size_t espacio) {
        struct alumno_s alumno = {
            .apellidos = "VOLENTINI",
            .nombres = "Esteban Daniel",
            .documento = "23.517.968",
        };

        SerializarAlumno(cadena, sizeof(cadena), &alumno);
    }
    ```

3. Confirmar los cambios, resolver los conflictos y subir los cambios al servidor.
