#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include "contenido.h"
#include "pelicula.h"
#include "serie.h"
using std::vector;

class Catalogo{
    private:
        vector <Contenido*> vids;

    public:
        Catalogo();
        void allVideos();
        void showVidsCalif(float calif);
        void showVidsGen(string gen);
        void showEp(string nomS);
        void showPeli(float calif);
        void calificar(string vidNom, float calif);
};

#endif