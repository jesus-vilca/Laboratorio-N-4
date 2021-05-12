#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main() {

    int arreglo[] = {1,2,3,6,5,4,8,9};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    DynamicArray b(arreglo, tam);
    
    //mostrando el arreglo
    b.print();

    //cambiamos el 1 por el 0
    b.remove(0);
    b.insert(0,0);

    //mostrando el arreglo
    b.print();

    return 0;
}
