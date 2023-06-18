#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>

using std::string;
using std::vector;

class Video{
    protected:
        string idV;
        string nombre;
        string duracion;
        string fecha;
        string genero;
        float calificacion;
        string genero;
    public:
        Video();
        Video(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1);
        void disp();
        void calificar(float calif);
};

#endif