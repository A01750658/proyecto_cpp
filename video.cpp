#include "video.h"
using std::cout;
using std::endl;

Video::Video(){
    
}

Video::Video(string idV1,string nombre1, string genero1, float calificacion1, string fecha1){
    idV = idV1;
    nombre = nombre1;
    //duracion = duracion1;
    fecha = fecha1;
    calificacion = calificacion1;
    genero = genero1;
}

void Video::disp(){
    cout<<"Video:"<< nombre << endl;
}

void Video::calificar(float calif){
    calificacion = calif;
}
