#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include "video.h"
#include "episodio.h"

using std::string;
using std::cout;
using std::vector;
using std::endl;



Episodio::Episodio(string idV1,string nombre1,string duracion1, string genero1, float calificacion1, string fecha1, string nomep1, int temp1, int numep, string idep1):Video(idV1, nombre1, genero1, calificacion1, fecha1){
    ep = numep;
    temp = temp1;
    idE = idep1;
}

void Episodio::show(){
    cout << "Se muestra película" << endl;
}

void Episodio::calificarEp(float calif){

}

float Episodio::getCalif(){
    return calificacion;
}

string Episodio::getName(){
    return nombre;
}

string Episodio::getGen(){
    return (genero);
}