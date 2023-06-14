#ifndef video_H
#define video_H

#include <iostream>
#include <string>

using std::string;

class video{
    private:
        string idV;
        string nombre;
        string duracion;
        string fecha;
        float calificacion;
    public:
        video();
        video(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1);
        void disp();
        void calificar(float calif);
};

#endif