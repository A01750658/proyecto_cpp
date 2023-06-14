#ifndef pelicula_H
#define pelicula_H

#include <iostream>
using std::string;

class peliula{
    private:
        string idV, nombre, duracion, fecha, genero;
        float calificacion;

    public:
        void show();
        void calificar(float calif);
};

#endif