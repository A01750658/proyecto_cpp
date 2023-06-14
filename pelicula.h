#ifndef pelicula_H
#define pelicula_H

#include <iostream>
#include "video.h"
using std::string;

class pelicula : public video{
    public:
        pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1);
        void show();
        void calificar(float calif);
};

#endif