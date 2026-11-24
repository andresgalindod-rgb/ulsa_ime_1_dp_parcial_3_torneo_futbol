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
[Inserta aquí tu respuesta]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Inserta aquí tu respuesta]

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
