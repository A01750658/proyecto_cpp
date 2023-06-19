#ifndef episodio_H
#define episodio_H

#include <iostream>
#include <string>
#include "video.h"
using std::string;

class Episodio:public Video{
    private:
        string temporada;
        int ep;
        int temp;
        string idV;
        string idE;
        

    public:
        Episodio(string idV1,string nombre1,string duracion1, string genero1, float calificacion1, string fecha1, string nomep1, int temp1, int numep, string idep1);
        void show();
        void calificarEp(float calif);
        float getCalif();
        string getName();
        string getGen();

};

#endif