#ifndef catalogo_H
#define catalogo_H

#include <vector>
#include "contenido.h"
using std::vector;

class catalogo{
    private:
        vector <contenido*> vids;

    public:
        catalogo();
        void allVideos();
        void showVidsCalif(float calif);
        void showVidsGen(string gen);
        void showEp(string nomS);
        void showPeli(float calif);
        void calificar(string vidNom, float calif);
};

#endif