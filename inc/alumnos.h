/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura de datos para cargar alumnos
typedef struct alumno_s {
    //! Vector para guardar apellido de alumno
    char apellidos[30];
    //! Vector para guardar nombres de alumno
    char nombres[30];
    //! Vector para guardar documento de identidad de alumno
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

//! Vector que guarda todos los alumnos y sus datos
extern const alumno_t ALUMNOS[];

//! Variable que determina la cantidad de alumnos
extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/

/*! @brief Función para agregar alumno y mostrar en pantalla
 *
 *  @param[in]   cadena: Cadena de caracteres que contiene datos personales de alumno
 *  @param[in]   espacio: Hace referencia a la cantidad de caracteres ingresados 
 *  @param[in]   alumno: Hace referencia al vector que guarda los datos del alumno
 *
 *  @return: True si la función se completó sin errores. Caso contrario devuelve false
 */

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);


/*! @brief Función para serializar alumno al listado y mostrar en pantalla
 *
 *  @param[in]  cadena: Cadena de caracteres que contiene datos personales de alumno
 *  @param[in]  espacio: Hace referencia a la cantidad de caracteres ingresados 
 *  @param[in]  alumno: Hace referencia al vector del listado de alumnos
 *  @param[in]  cantidad: Hace referencia a la cantidad de alumnos
 *
 *  @return: True si la función se completó sin errores. Caso contrario devuelve false
 */

bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
