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
        unordered_map <string, Contenido*> contenido;
        unordered_map<string, Serie> series;

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