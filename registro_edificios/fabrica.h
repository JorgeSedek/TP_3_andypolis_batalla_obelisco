#ifndef FABRICA_H
#define FABRICA_H

#include "edificio.h"

class Fabrica: public Edificio {

private:

public:

    Fabrica(int piedra, int madera, int metal, int maximo,  int fila, int columna);

    string obtener_material_brindado();

    void mostrar_mensaje();

};

#endif //FABRICA_H