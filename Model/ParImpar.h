#ifndef CASINO_PARIMPAR_H
#define CASINO_PARIMPAR_H

#include "Juego.h"

class ParImpar : public Juego {
public:
    ParImpar();
    ~ParImpar() override = default;

    float calcularResultado(float gonzosApostar) override;
    float jugar(float gonzosApostar) override;
    void mostrarReglas() override;
};

#endif //CASINO_PARIMPAR_H

