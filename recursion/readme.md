¿Qué es backtracking?
Es una técnica donde:

Exploras una posibilidad.

Si no sirve → retrocedes (backtrack) y pruebas otra.

Repite hasta encontrar todas las soluciones válidas (o una, si solo buscas una).

Analogia simple: armar una contraseña
Supón que tienes que probar combinaciones de letras como en una cerradura.

backtrack("")         // Nivel 0
├─ backtrack("a")     // Nivel 1
│  ├─ backtrack("aa") // Nivel 2 ✅
│  └─ backtrack("ab") // Nivel 2 ✅
└─ backtrack("b")     // Nivel 1
   ├─ backtrack("ba") // Nivel 2 ✅
   └─ backtrack("bb") // Nivel 2 ✅

function backtrack(...) {
  if (condición de éxito) {
    guardar resultado
    return
  }

  for (opción de decisión) {
    elegir opción
    backtrack(nueva decisión)
    deshacer opción
  }
}
