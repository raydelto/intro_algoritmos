#include <iostream>

using namespace std;

bool BusquedaLineal(int *arreglo, size_t cantidad, int numero)
{
    for (size_t i = 0; i < cantidad; i++)
    {
        if (arreglo[i] == numero)
        {
            return true;
        }
    }
    return false;
}

bool BusquedaBinaria(int *arreglo, size_t cantidad, int numero)
{
    size_t count = 0;
    size_t mitad;
    size_t limiteInferior = 0;
    size_t limiteSuperior = cantidad - 1;
    while (limiteInferior <= limiteSuperior)
    {
        count++;
        mitad = (limiteInferior + limiteSuperior) / 2;

        if (numero > arreglo[mitad])
        {
            limiteInferior = mitad + 1;
        }
        else if (numero < arreglo[mitad])
        {
            limiteSuperior = mitad - 1;
        }
        else
        {
            std::cout << "Número encontrado luego de " << count << " iteraciones" << std::endl;
            return true;
        }
    }

    std::cout << "Luego de " << count << " iteraciones, el número no fue encontrado." << std::endl;
    return false;
}

int main()
{
    int arreglo[] = {1, 3, 5, 7, 9, 11};
    size_t cantidad = sizeof(arreglo) / sizeof(int);
    int numero;
    cout << "Introduzca el número que desea buscar: ";
    cin >> numero;
    if (BusquedaBinaria(arreglo, cantidad, numero))
    {
        std::cout << numero << " está contenido en el arreglo" << std::endl;
    }
    else
    {
        std::cout << numero << " NO está contenido en el arreglo" << std::endl;
    }
    return 0;
}
