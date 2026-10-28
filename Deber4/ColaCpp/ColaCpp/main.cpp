#include <iostream>
#include "Operaciones.h"

using namespace std;

int main() {
    Nodo* frente = nullptr;
    Nodo* fin = nullptr;

    // Datos fijos para observar el comportamiento FIFO.
    cout << "Insertar 10, 20 y 30:" << endl;
    insertar(frente, fin, 10);
    insertar(frente, fin, 20);
    insertar(frente, fin, 30);
    imprimir(frente);

    //Prueba metodo
    cout << "Cantidad de elementos: "
         << contarElementos(frente) << endl;

    cout << "\nBuscar 20: ";
    if (buscar(frente, 20)) {
        cout << "encontrado" << endl;
    } else {
        cout << "no encontrado" << endl;
    }

    cout << "\nEliminar el primero (10):" << endl;
    eliminar(frente, fin);
    imprimir(frente);

    //Prueba metodo
    cout << "Cantidad de elementos despues de eliminar: "
         << contarElementos(frente) << endl;

    cout << "\nBuscar 10: ";
    if (buscar(frente, 10)) {
        cout << "encontrado" << endl;
    } else {
        cout << "no encontrado" << endl;
    }

    cout << "\nEliminar los elementos restantes:" << endl;
    while (frente != nullptr) {
        eliminar(frente, fin);
    }

    imprimir(frente);

    //Prueba metodo
    cout << "Cantidad de elementos al final: "
         << contarElementos(frente) << endl;

    return 0;
}