#ifndef serie_H
#define serie_H

#include <iostream>
#include <vector>
#include "eposodio.h"
using std::string;
using std::vector;

class serie{
    private:
        vector <episodio*> eps;
        string idV, nombre, duracion, fecha, genero;
        float calificacion;

    public:
        void show();
        void calificar(float calif);
};

#endif