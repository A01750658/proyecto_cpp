#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <iostream>
#include <string>

using std::string;

class Contenido{
    public:
        virtual void show() = 0;
        virtual void calificar(float calif) = 0;
        virtual void allVideosFiltCal(float calif) = 0;
        virtual void allVideosFiltGen(string gen) = 0;
        virtual void showPeliculasFilt(float calif) = 0;
        virtual void showSeriesFilt(float calif) = 0;
};

#endif