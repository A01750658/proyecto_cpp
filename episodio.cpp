#include <iostream>
#include <string>
#include "episodio.h"

using std::string;
using std::cout;
using std::endl;

Episodio::Episodio(){

}

Episodio::Episodio(string idV1,string nombre1,string duracion1, string fecha1, float calificacion1, int ep1, int temp1, string idE1):Video(idV1, nombre1, duracion1, fecha1, calificacion1){
    ep1 = ep;
    temp1 = temp;
    idE1 = idE;
}

void Episodio::show(){
    cout << "Se muestra película" << endl;
}

void Video::calificar(float calif){

}