#ifndef video_H
#define video_H

#include <iostream>
#include <string>

using std::string;

class Video{
    private:
        string idV;
        string nombre;
        string duracion;
        string fecha;
        float calificacion;
        int ep;
        int temp;
        string idE;
    public:
        Video();
        Video(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1);
        void disp();
        void calificar(float calif);
};

#endif