#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

class ArregloD{
    string *arreglod;
    size_t tam;
    size_t cont;
    const static size_t Max = 10;
    public:
    ArregloD();
    ~ArregloD();
    void insertar_final (string v);
    void insertar_inicio(string v);
    size_t size();
    string operator [](size_t p){
        return arreglod [p];

    }
    private:
    void expandir();
};

#endif