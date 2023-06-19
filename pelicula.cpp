#include <iostream>
#include <string>
#include "pelicula.h"
#include "video.h"

using std::cout;
using std::endl;
using std::string;

Pelicula::Pelicula(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1, string genero1):Video(idV1, nombre1, genero1, calificacion1, fecha1), Contenido(){
    idV = idV1;
    nombre = nombre1;
    duracion = duracion1;
    fecha = fecha1;
    calificacion = calificacion1;
}

void Pelicula::show(){
    cout << "Nombre: "  << nombre << endl;
}

void Pelicula::allVideos(){
    
}

void Pelicula::showVidsCalif(float calif){
    cout << "Calificación: " << calificacion << endl;
}

void Pelicula::showVidsGen(string gen){
    cout << "Genero: " << genero << endl;
}

void Pelicula::calificar(string vidNom, float calif){
    calificacion = calif;
}





