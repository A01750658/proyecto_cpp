#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <iostream>
#include <string>
using std::string;

class Contenido{
    public:
        virtual void allVideos() = 0;
        virtual void showVidsCalif(float calif) = 0;
        virtual void showVidsGen(string gen) = 0;;
        virtual void calificar(string vidNom, float calif) = 0;
};

#endif