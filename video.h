<<<<<<< HEAD
#ifndef VIDEOS_H
#define VIDEOS_H
=======
#ifndef VIDEO_H
#define VIDEO_H
>>>>>>> 5218962d8cc6d0984097fd1f3c543484d9c9f066

#include <iostream>
#include <string>

using std::string;

<<<<<<< HEAD
class video{
=======
class Video{
>>>>>>> 5218962d8cc6d0984097fd1f3c543484d9c9f066
    private:
        string idV;
        string nombre;
        string duracion;
        string fecha;
        float calificacion;
<<<<<<< HEAD
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
=======
        int numEp;
    public:
        Video();
        Video(string idV, string nombre, string duracion, string fecha, float calificacion, int numEp);
        Video(string idV, string nombre, string duracion, string fecha, float calificacion);
        string getName();
        void display();
        
>>>>>>> 5218962d8cc6d0984097fd1f3c543484d9c9f066
};

#endif