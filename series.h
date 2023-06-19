#ifndef SERIES_H
#define SERIES_H

#include <iostream>
#include <string>
#include <vector>
#include "episodio.h"
#include "contenido.h"

using std::vector;
using std::string;

class Series:public Contenido{
    private: 
        vector<Episodio*> episodios;
        string idS;
    
    public:
        void show();
        void calificar(float calif);
        void allVideos();
        void showVidsCalif(float calif);
        void showVidsGen(string gen);
        void showEp(string nomS);
        void showPeli(float calif);
        void calificar(string vidNom, float calif);
};

#endif