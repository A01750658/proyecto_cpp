#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <iostream>
#include <string>

using std::string;

class Contenido{
    public:
        virtual void allVideos() = 0;
        virtual void showVideosCalif() = 0;
        virtual void showVidsGen(string gen)  = 0;
        virtual void showEp(string nomS) = 0;
        virtual void showPeli (float calif) = 0;
        virtual void calificar(string vidNom, float calif) = 0;
};

#endif