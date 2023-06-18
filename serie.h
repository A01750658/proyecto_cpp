#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <vector>
#include "episodio.h"
#include "video.h"
#include "contenido.h"
using std::vector;
using std::string;

class Serie: public Video, public Contenido{
    private:
        vector <Episodio*> episodios;
        string iD;
        string nombre;
        int numEps;

    public:
        Serie();
        Serie(string iD1, string nombre1, int numEps1);
        void show();
        void allVideos();
        void showVidsCalif(float calif);
        void showVidsGen(string gen);
        void showEp(string nomS);
        void agregarEp(Episodio* ep);
};

#endif