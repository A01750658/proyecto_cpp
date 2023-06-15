#include <iostream>
#include <string>
#include "pelicula.h"
using std::cout;
using std::endl;
using std::string;

Pelicula::Pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1):Video(idV1, nombre1, duracion1, fecha1, calificacion1){
    
}

void Pelicula::show(){
    cout<<"se muestra pelicula"<< endl;
}

void Video::calificar(float calif){
    
}