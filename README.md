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

## Segunda Parte

1. Crear un repositorio personal realizando un *fork* del repositorio de la catedra, clonar el repositorio personal en su computadora y desplegar la rama *develop*.

2. Editar la definicion de la constante ALUMNOS siguiendo el siguiente ejemplo

    ```c
    static const struct alumno_s ESTEBAN_VOLENTINI = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    const alumno_t ALUMNOS[] = {
        &ESTEBAN_VOLENTINI,
    };
    ```

3. Confirmar los cambios, subirlos al servidor y pedir un *pull request* poniendo en la descripcion "Agrego los datos del alumno APELLIDO, Nombre"

## Tercera Parte

1. Documentar los archivos `alumnos.h` y `alumnos.c` siguiendo los criterios proporcionados en la clase practica.

2. Modificar el archivo `makefile` para agregar una regla que genere la documentacion con el comando `make doc`

3. Confirmar los cambios y subirlos al servidor.
