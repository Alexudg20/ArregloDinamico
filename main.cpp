#include <iostream>
#include "arreglo.h"

using namespace std;

void dinamico (string *a){
    *a= *a++ ;
}

int main (){
    ArregloD arreglod;
    arreglod.insertar_inicio();
    arreglod.insertar_final();
    

    for (size_t i = 0; i < arreglod.size(); i++)
    {
        cout<<arreglod[i]<< "";

    }
    return 0;
}