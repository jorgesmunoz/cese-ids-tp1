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

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

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

bool AlejandroPermingeat(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "PERMINGEAT",
        .nombres = "Alejandro",
        .documento = "29.072.387",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

/*=====[Implementations of private functions]================================*/
