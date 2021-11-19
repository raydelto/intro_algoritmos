# Introducción a los algoritmos.

La notación asintótica, se utiliza para medir la eficiencia del un algoritmo.

Big O Notation mide la cantidad de procesamiento requerido en el peor de los casos.

O(1)

O(Log N):

O(N): Complejidad lineal, quiere decir que mi código dará tantos ciclos como elementos tenga el arreglo.

for(int i = 0; i < arreglo.size(); i++)

O(N^2)
for(int i = 0; i < arreglo.size(); i++)
    for(int j = 0; j < arreglo.size(); j++)

O(2^X)

## Búsqueda binaria

Dado un arreglo lleno de números ordenados.

numero a buscar = 8


   9 ] [ 11

La complejidad algorítmica de una búsqueda binaria es de O(Log N).
