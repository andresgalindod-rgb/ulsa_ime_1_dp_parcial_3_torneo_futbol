# Documentación del módulo

## 1. Autor

**Nombre:** Andrés Galindo Dávila  
**Matrícula:** 26113  
**Módulo:** 3. Tabla de posiciones  
**Archivo de código:** `include/tabla.h`

## 2. Propósito

¿Qué hace tu módulo y para qué le sirve a quien usa el programa?

Mi módulo calcula las estadísticas de cada equipo del torneo a partir de los resultados de los 15 partidos: partidos jugados (PJ), ganados (PG), empatados (PE), perdidos (PP), goles a favor (GF), goles en contra (GC) y puntos (PTS). No imprime nada; solo deja esos datos guardados dentro de cada `Equipo`.

Al usuario le sirve porque, sin este cálculo, no habría tabla de posiciones, ni campeón, ni ficha de equipo: el módulo 4 ordena y muestra la tabla con estos datos, y el módulo 5 los usa en la ficha. El programa lo ejecuta una sola vez, justo después de simular el torneo.

## 3. Entradas y salidas

¿Qué recibe tu módulo (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

**Recibe (por parámetros):**

- El arreglo de equipos (`Equipo equipos[]`), que se modifica.
- Cuántos equipos hay (`int totalEquipos`).
- El arreglo de partidos ya simulados (`const Partido partidos[]`), que solo se lee.
- Cuántos partidos hay (`int totalPartidos`).

**Del teclado:** nada. El módulo no interactúa con el usuario.

**Produce:** no imprime ni devuelve valores (todas sus funciones son `void`). Su resultado son los campos de estadísticas (`jugados`, `ganados`, `empatados`, `perdidos`, `golesFavor`, `golesContra` y `puntos`) actualizados dentro de cada equipo del arreglo original, gracias al paso por referencia.

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu módulo y qué tarea hace cada una?**

[Inserta aquí tu respuesta]

**¿Qué estructuras de datos usa tu módulo (registros, arreglos, matrices o apuntadores), por qué las elegiste y cómo pasas los datos a cada función (por valor, por referencia, como arreglo o con un apuntador)?**

[Inserta aquí tu respuesta]

**¿Dónde demuestras los temas asignados a tu módulo?**

[Inserta aquí tu respuesta]

**¿Qué ciclos usaste y por qué esos?**

[Inserta aquí tu respuesta]

**¿Qué constantes usaste y por qué son constantes?**

[Inserta aquí tu respuesta]

**¿Qué funciones reutilizaste de `utilerias.h`, de `torneo.h` o de otro módulo?**

[Inserta aquí tu respuesta]

**¿Qué casos de rechazo maneja tu módulo y qué mensaje muestra en cada uno?** Si tu módulo es el 3, escribe "No aplica".

[Inserta aquí tu respuesta]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
calcularTabla(equipos, totalEquipos, partidos, totalPartidos)
    1. Para i desde 0 hasta totalEquipos - 1:
           reiniciarEstadisticas(equipos[i])
    2. Para i desde 0 hasta totalPartidos - 1:
           partido <- partidos[i]
           aplicarPartido(partido, equipos[partido.local], equipos[partido.visitante])

reiniciarEstadisticas(equipo)
    1. jugados, ganados, empatados, perdidos <- 0
    2. golesFavor, golesContra, puntos <- 0

aplicarPartido(partido, local, visitante)
    1. registrarResultado(local, partido.golesLocal, partido.golesVisitante)
    2. registrarResultado(visitante, partido.golesVisitante, partido.golesLocal)

registrarResultado(equipo, golesFavor, golesContra)
    1. equipo.jugados <- equipo.jugados + 1
    2. equipo.golesFavor <- equipo.golesFavor + golesFavor
    3. equipo.golesContra <- equipo.golesContra + golesContra
    4. Si golesFavor > golesContra:
           equipo.ganados <- equipo.ganados + 1
           equipo.puntos <- equipo.puntos + PUNTOS_VICTORIA
       Si no, si golesFavor = golesContra:
           equipo.empatados <- equipo.empatados + 1
           equipo.puntos <- equipo.puntos + PUNTOS_EMPATE
       Si no:
           equipo.perdidos <- equipo.perdidos + 1
           equipo.puntos <- equipo.puntos + PUNTOS_DERROTA
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Sí. Con los marcadores del modo de prueba seguí la receta para Leones (equipo 4):

| Rival | Marcador (Leones primero) | Resultado |
| --- | --- | --- |
| Aguilas | 0 - 4 | Perdido |
| Halcones | 5 - 0 | Ganado |
| Jaguares | 1 - 0 | Ganado |
| Pumas | 5 - 3 | Ganado |
| Tigres | 3 - 3 | Empatado |

PJ = 5, PG = 3, PE = 1, PP = 1, GF = 0 + 5 + 1 + 5 + 3 = 14, GC = 4 + 0 + 0 + 3 + 3 = 10, PTS = 3 x 3 + 1 x 1 = 10. Coincide con la tabla de ejemplo de `PROYECTO.md`.

Al probarla corregí dos cosas:

1. Cuando Leones es visitante (contra Aguilas y Halcones), sus goles están en la columna del visitante. Por eso `aplicarPartido` llama a `registrarResultado` con los goles invertidos para el visitante.
2. Si la tabla se calculara dos veces, las estadísticas se sumarían dos veces. Por eso agregué el paso 1 de `calcularTabla`, que pone todo en cero antes de recorrer los partidos.

## 6. Pruebas

Incluye casos normales y casos límite.

| # | Qué probaste | Entrada | Resultado esperado | Resultado obtenido |
| --- | --- | --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

## 7. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

## 8. Reflexión

**¿Qué aprendiste?**

[Inserta aquí tu respuesta]

**¿Qué cambiarías de tu proceso?**

[Inserta aquí tu respuesta]
