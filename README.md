# PARCIAL PRIMER CORTE – JOHAN GALEANO

# Punto 1: Comparacion de paradigmas imperativo y declarativo
El objetivo es ordenar una lista de calificaciones de estudiantes y analizar la legibilidad,
expresividad, manejo de estructuras de datos, estado, mantenimiento y eficiencia de cada
enfoque. 

# Analisis Comparativo
Al revisar los dos codigos, note varias diferencias importantes entre ambos enfoques.
En **Haskell**, el codigo es mucho mas **limpio y facil de leer**. No tengo que preocuparme por
indicar cada paso de la manera en que se mueve la informacion; simplemente digo que
quiero ordenar la lista, y Haskell se encarga de hacerlo. Esto hace que sea **muy expresivo**:
describe claramente que hace el programa, sin perderse en detalles. Como las listas son
**inmutables**, es mas facil razonar sobre lo que pasa en cada paso y no me preocupo por
errores relacionados con cambiar datos accidentalmente. Ademas, si quiero modificar la
logica de ordenamiento, generalmente solo cambio la funcion que inserta los elementos, lo
que hace que **mantener el codigo sea sencillo**.

En **Python**, por otro lado, todo es mas detallado y paso a paso. Debo escribir exactamente
como se mueve cada numero en la lista. Esto me da un control total sobre el proceso, pero
hace que el codigo sea un poco mas largo y, a veces, menos intuitivo. Las listas son
mutables, asi que estoy cambiando datos en memoria constantemente, lo que requiere un
poco mas de cuidado. Para modificar la logica, debo revisar los bucles y las condiciones, lo
que hace que **mantener o extender el codigo sea mas trabajoso**.

En cuanto a **eficiencia**, el enfoque de Python con bucles es generalmente mas rapido para
listas medianas y grandes, mientras que la version recursiva de Haskell puede ser menos
eficiente si no se optimiza, aunque para listas pequeñas funciona perfectamente.

En resumen, Haskell es mas **limpio, declarativo y seguro**, mientras que Python es mas
directo y controlable, pero requiere mas cuidado con los detalles. Ambos enfoques
funcionan bien, solo que cada uno tiene sus ventajas dependiendo de lo que busque:
expresividad o control paso a paso

<img width="815" height="185" alt="image" src="https://github.com/user-attachments/assets/0124a315-4a18-4b96-a64d-e418adcedd1d" />

# Punto 2: Gestion Dinamica de Estudiantes (C)
# Introduccion

Se busca desarrollar un sistema que gestione registros de estudiantes usando memoria
dinamica, optimizando espacio y evitando desperdicio. Cada estudiante tiene: nombre,
apellido, edad, id y calificaciones

# Tecnicas de optimizacion aplicadas 
- Memoria dinámica: se reserva memoria exacta para cada nombre, apellido y array de
calificaciones, evitando desperdicio.
- Bitfields: se usan 7 bits para edad y 16 bits para ID, reduciendo el espacio ocupado
por estos campos pequeños.
- Liberacion de memoria: se usa free para evitar fugas de memoria al eliminar
estudiantes.
- Arrays dinámicos: el array de calificaciones se ajusta al numero real de materias de
cada estudiante.
- Estructura compacta: todos los campos se almacenan en la misma estructura,
aprovechando la alineación eficiente de memoria.

<img width="751" height="522" alt="image" src="https://github.com/user-attachments/assets/d19d6098-b5e7-4d7f-b359-b720b84e9e3a" />



