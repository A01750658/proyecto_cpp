#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <vector>
#include "episodio.h"
#include "video.h"
#include "contenido.h"
using std::vector;

class Serie: public Video, public Contenido{
    private:
        vector <Episodio*> eps;
        float calificacion;

    public:
        void show();
        void allVideos();
        void showVidsCalif(float calif);
        void showVidsGen(string gen);
        void showEp(string nomS);
        void showPeli(float calif);
        void calificar(string vidNom, float calif);
};

#endif