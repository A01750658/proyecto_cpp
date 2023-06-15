#ifndef serie_H
#define serie_H

#include <iostream>
#include <vector>
#include "episodio.h"
using std::string;
using std::vector;

class Serie{
    private:
        vector <Episodio*> eps;
        string idV, nombre, duracion, fecha, genero;
        float calificacion;

    public:
        void show();
        void calificar(float calif);
};

#endif