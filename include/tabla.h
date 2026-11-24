#pragma once

// =====================================================
// MODULO 3: TABLA DE POSICIONES
// Responsable: Andres Galindo Davila (26113)
//
// Calcula las estadisticas de cada equipo (PJ, PG, PE, PP,
// GF, GC y PTS) a partir de los resultados de los partidos.
// No imprime nada: solo calcula. El reporte lo muestra el
// modulo 4.
//
// Temas: funciones y paso por referencia.
// =====================================================

#include "torneo.h"

// Pone en cero las estadisticas de un equipo.
// No toca el nombre.
//
// Recibe: el equipo, por referencia, porque se modifica.
// Devuelve: nada.
inline void reiniciarEstadisticas(Equipo& equipo) {
    equipo.jugados = 0;
    equipo.ganados = 0;
    equipo.empatados = 0;
    equipo.perdidos = 0;
    equipo.golesFavor = 0;
    equipo.golesContra = 0;
    equipo.puntos = 0;
}

// Registra en un equipo el resultado de un partido que jugo:
// suma el partido jugado, los goles y los puntos que le tocan.
//
// Recibe: el equipo, por referencia, porque se modifica;
//         los goles que anoto y los goles que recibio, por valor.
// Devuelve: nada.
inline void registrarResultado(Equipo& equipo, int golesFavor, int golesContra) {
    equipo.jugados++;
    equipo.golesFavor += golesFavor;
    equipo.golesContra += golesContra;

    if (golesFavor > golesContra) {
        equipo.ganados++;
        equipo.puntos += PUNTOS_VICTORIA;
    } else if (golesFavor == golesContra) {
        equipo.empatados++;
        equipo.puntos += PUNTOS_EMPATE;
    } else {
        equipo.perdidos++;
        equipo.puntos += PUNTOS_DERROTA;
    }
}
