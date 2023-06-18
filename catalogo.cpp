#include "catalogo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using std::ifstream;
using std::string;
using std::stringstream;
using std::getline;
using std::cout;
using std::endl;
using std::vector;

Catalogo::Catalogo(){
    int rows = 0, columns = 0;
    vector <string> str;//vector con separeciones por comas
    ifstream file;
    file.open("BasePeliculas.csv");
    string line, l1, l2;
    getline(file, line);
    stringstream lirow(line);
    while (getline(lirow, l2, ','))
    {
        columns++;
    }
    
    while (getline(file, line))
    {
        rows++;
        stringstream comi(line);
        while (getline(comi, l1, ','))
        {
            str.push_back(l1);
            //cout<<l1<<endl; imprime valores separados por ","
        }                                                
        //cout<<line<<endl; imprime toda la linea del csv
    }
    file.close();
    bool gg = false;
    string str2[columns*rows]; //array con nombre de episodio y generos acomodados
    int cont = 0;
    for (int i = 0; i < int(str.size()); i++)
    {
        if (gg == false)
        {
            
        }
        
    }
}