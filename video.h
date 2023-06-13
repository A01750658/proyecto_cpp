#ifndef VIDEO_H
#define VIDEO_H

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
        int numEp;
    public:
        Video();
        Video(string idV, string nombre, string duracion, string fecha, float calificacion, int numEp);
        Video(string idV, string nombre, string duracion, string fecha, float calificacion);
        string getName();
        void display();
        
};

#endif