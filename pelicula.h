#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
#include "video.h"
#include "contenido.h"
using std::string;

class Pelicula : public Video, public Contenido{
    public:
        Pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1);
        void show();
        void allVideos();
        void showVidsCalif(float calif);
        void showVidsGen(string gen);
        void showEp(string nomS);
        void showPeli(float calif);
        void calificar(string vidNom, float calif);
};

#endif