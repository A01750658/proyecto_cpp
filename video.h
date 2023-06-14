#ifndef VIDEOS_H
#define VIDEOS_H

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
        video(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1){
            idV = idV1;
            nombre = nombre1;
            duracion = duracion1;
            fecha = fecha1;
            calificacion = calificacion1;
        }

        void disp(){
            
        };
};

#endif