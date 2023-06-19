#include <iostream>
#include <string>
#include "serie.h"

using std::cout;
using std::endl;

Serie::Serie(string iD1, string nombre1, int numEps1){
    iD = iD1;
    nombre = nombre1;
    numEps = numEps1;
}

void Serie::show(){
    cout << "Nombre:" << nombre << endl;
    cout << "id: " << iD << endl;
    cout << "Numero de episodios: " << numEps << endl;
}

void Serie::allVideos(){
    for (int i = 0; i < episodios.size();i++){
        cout << "Episodio: " << episodios[i] -> getName();
    }
}

void Serie::showVidsCalif(float calif){
    for (int i = 0; i < episodios.size(); i++){
        cout << "La calificación del episodio: " << episodios[i] -> getName() << "es " <<episodios[i] -> getCalif();

    }
}

void Serie::showVidsGen(string gen){
    for (int i = 0; i < episodios.size(); i++){
        cout << "Los géneros del episodio: " << episodios[i] -> getName() << "son " <<episodios[i] -> getGen();

    }
}

void Serie::agregarEp(Episodio* ep){
    episodios.push_back(ep);
}

void Serie::calificar(string vidNom, float calif){

}