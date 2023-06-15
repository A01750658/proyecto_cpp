#ifndef pelicula_H
#define pelicula_H

#include <iostream>
#include <string>
#include "video.h"
#include "contenido.h"
using std::string;

class Pelicula : public Video{
    public:
        Pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1);
        void show();
        void calificar(float calif);
};

#endif