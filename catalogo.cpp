#include "catalogo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "episodio.h"
#include "pelicula.h"
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
        /*while (getline(comi, l1, ','))
        {
            str.push_back(l1);
            //cout<<l1<<endl; imprime valores separados por ","
        }*/                                                
        str.push_back(line);// imprime toda la linea del csv
    }
    file.close();
    string str2[columns*rows]; //array con nombre de episodio y generos acomodados
    bool coma = false;
    int cont = 0;
    for (int i = 0; i < int(str.size()); i++)
    {
        for (char& c : str[i])
        {
            if (c == '"')
            {
                coma = !coma;
            }
            
            if (coma == false)
            {
                if (c == ',')
                {
                    cont++;
                }
            }
            str2[cont]+=c;
        }
        cont++;
    }
    string str3[columns*rows]; //array con los datos limpios. sin caracteres que contaminen.
    for (int i = 0; i < columns*rows; i++)
    {
        for (char& c : str2[i])
        {
            if (c == ',' || c == '"')
            {
            }
            else{
                str3[i] += c;
            }
        }
    }
    vector <Pelicula> pelis;
    vector <Episodio> episo;
    int m = 0;
    for (int i = 0; i < rows; i++)
    {
        if (str3[0+(10*m)] != "")
        {
            Episodio ep(str3[0+(10*m)],str3[1+(10*m)],str3[2+(10*m)],str3[3+(10*m)],stof(str3[4+(10*m)]),str3[5+(10*m)],str3[6+(10*m)],stoi(str3[7+(10*m)]),stoi(str3[8+(10*m)]),str3[9+(10*m)]);
            episo.push_back(ep);
        }
        else{
            Pelicula pe(str3[0+(10*m)],str3[1+(10*m)],str3[2+(10*m)],str3[3+(10*m)],stof(str3[4+(10*m)]),str3[5+(10*m)]);
            pelis.push_back(pe);
        }
        m++;
    }
    pelis[0].show();
}