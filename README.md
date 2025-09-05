# PARCIAL PRIMER CORTE – Repositorio

Este repositorio organiza el material del **Parcial del primer corte** con tres puntos principales:
1) comparación entre enfoques **declarativo** (Haskell) e **imperativo** (Python) para ordenar calificaciones;
2) **gestión dinámica de estudiantes en C** (estructuras, bitfields y memoria dinámica);
3) **promedio** en Haskell y su **traducción al cálculo lambda**.

> Estructura pensada para subirse tal cual a GitHub, con código ejecutable y pasos de uso.

---

## Punto 1 — Comparación de paradigmas (Imperativo vs Declarativo)

**Objetivo**: ordenar una lista de calificaciones de estudiantes y analizar: legibilidad, expresividad, manejo de estructuras de datos, estado, mantenimiento y eficiencia.

### 1.1 Código Declarativo (Haskell)

Ruta: `punto1/haskell/ordenar.hs`

**Ejecutar**:
```bash
ghc -O2 punto1/haskell/ordenar.hs -o ordenar_hs
./ordenar_hs
