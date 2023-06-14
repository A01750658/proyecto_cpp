#include "pelicula.h"
using std::cout;

pelicula::pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1){
    video(idV1, nombre1, duracion1, fecha1, calificacion1);
}

void pelicula::show(){
    cout<<"se muestra pelicula"<<"\n";
}

void video::calificar(float calif){
    
}