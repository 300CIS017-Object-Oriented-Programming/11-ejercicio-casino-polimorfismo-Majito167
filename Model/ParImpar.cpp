#include "ParImpar.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

ParImpar::ParImpar() {}


float ParImpar::calcularResultado(float gonzosApostar) {
    // Genera número aleatorio entre 1 y 10
    srand(time(0));
    int numero = rand() % 10 + 1;
    bool esPar = numero % 2 == 0;

    string eleccion;
    cout << "Elige 'par' o 'impar': ";
    cin >> eleccion;

    cout << "Numero generado: " << numero << endl;

    if ((esPar && eleccion == "par") || (!esPar && eleccion == "impar")) {
        cout << "Ganaste" << endl;
        return gonzosApostar * 2;
    } else {
        cout << "Perdiste." << endl;
        return 0;
    }
}

float ParImpar::jugar(float gonzosApostar) {
    return calcularResultado(gonzosApostar);
}

void ParImpar::mostrarReglas() {
    cout << "Reglas de Par o Impar:\n";
    cout << "1. Elige 'par' o 'impar'.\n";
    cout << "2. Se genera un numero del 1 al 10.\n";
    cout << "3. Si aciertas la paridad, ganas el doble de lo apostado.\n";
}
