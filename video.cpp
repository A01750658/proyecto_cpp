#include "video.h"
using std::cout;

Video::Video(){
    
}

Video::Video(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1){
    idV = idV1;
    nombre = nombre1;
    duracion = duracion1;
    fecha = fecha1;
    calificacion = calificacion1;
}

void Video::disp(){
    cout<<"Se muestra video"<<"\n";
}

void Video::calificar(float calif){
    calificacion = calif;
}