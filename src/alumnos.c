/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>
#include <string.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

<<<<<<< HEAD
//! Tipo de dato que almacena los datos del alumno
=======

>>>>>>> develop
static const struct alumno_s FEDERICO_PACHER = {
    .apellidos = "PACHER",  //!<    Apellido del alumno
    .nombres = "Federico",  //!<    Nombre del alumno
    .documento = "28.215.978",  //!<    Documento del alumno
};

//! Tipo de dato que contine a los alumnos
const alumno_t ALUMNOS[] = {
    &FEDERICO_PACHER,   //!< Nombre del alumno en la lista
};

//!tipo de dato que almacena la cantidad de alumnos
const int CANTIDAD_ALUMNOS = (sizeof(ALUMNOS) / sizeof(alumno_t));

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

/**
    *   @brief  Funcion para mostrar en pantalla los datos personales del alumno  
    *   @param[in]  cadena      Referencia a un objeto que contiene los datos personales del alumno
    *   @param[in]  espacio     Referencia que  indica la cantidad de datos del alumno
    *   @param[in]  alumno      Referencia al alumno 
    *   @return         True            El procedimiento se completo sin errores
    *   @return         False           El  procedimiento detecto un error
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}
 
 /**
    *   @brief  Funcion para mostrar en pantalla los datos personales del la lista de alumnos  
    *   @param[in]  cadena      Referencia a un objeto que contiene los datos personales del alumno
    *   @param[in]  espacio     Referencia que  indica la cantidad de datos del alumno
    *   @param[in]  alumnos[]   Referencia al listado de alumnos 
    *   @param[in]  cantidad    Referencia que indica la cantidad de alumnos a mostrar en pantalla
    *   @return         True            El procedimiento se completo sin errores
    *   @return         False           El  procedimiento detecto un error
*/
bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad) {
    int posicion = snprintf(cadena, espacio, "[\r\n  ");
    bool resultado = (posicion > 0);

    if (resultado){
        for(int indice = 0; indice < cantidad; indice++ ) {
            resultado = SerializarAlumno(&cadena[posicion], espacio - posicion, alumnos[indice]);
            if (resultado) {
                posicion += strlen(&cadena[posicion]);
                posicion += snprintf(&cadena[posicion], espacio - posicion, ",\r\n  ");
            } else {
                break;
            }
        }
    }

    snprintf(&cadena[posicion] - 5, espacio - posicion + 5, "\r\n]");
    return resultado;
}

/*=====[Implementations of private functions]================================*/
