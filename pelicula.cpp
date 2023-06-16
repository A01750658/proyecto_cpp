#include <iostream>
#include <string>
#include "pelicula.h"
#include "video.h"

using std::cout;
using std::endl;
using std::string;

Pelicula::Pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1):Video(idV1, nombre1, duracion1, fecha1, calificacion1), Contenido(){
    idV = idV1;
    nombre = nombre1;
    duracion = duracion1;
    fecha = fecha1;
    calificacion = calificacion1;
}

void Pelicula::show(){
    cout<<"se muestra pelicula"<< endl;
}

void Pelicula::calificar(string vidNom, float calif){
    calificacion = calif;
}

void Pelicula::allVideos(){

}

