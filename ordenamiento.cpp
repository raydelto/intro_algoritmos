#include <iostream>

using namespace std;

void Imprimir(int *arreglo, size_t cantidad)
{
    for (size_t i = 0; i < cantidad; i++)
    {
        std::cout << arreglo[i] << "\t";
    }
    std::cout << endl;
}

void Burbuja(int *arreglo, size_t cantidad)
{
    for (size_t i = 0; i < cantidad; i++)
    {
        for (size_t j = 0; j < cantidad - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                int aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
}

void BurbujaOptimizada(int *arreglo, size_t cantidad)
{
    bool cambios = false;
    while (!cambios)
    {
        cambios = false;
        for (size_t i = 0; i < cantidad - 1; i++)
        {
            if (arreglo[i] > arreglo[i + 1])
            {
                int aux = arreglo[i];
                arreglo[i] = arreglo[i + 1];
                arreglo[i + 1] = aux;
                cambios = true;
            }
        }
    }
}

int main()
{
    int arreglo[] = {8, 3, 1, 34, 35, 3546, 321};
    size_t cantidad = sizeof(arreglo) / sizeof(int);
    std::cout << "antes de ordenar: " << std::endl;
    Imprimir(arreglo, cantidad);
    Burbuja(arreglo, cantidad);
    std::cout << "Luego de ordenar: " << std::endl;
    Imprimir(arreglo, cantidad);

    int numero;
    return 0;
}
