#include "arreglo.h"

ArregloD::ArregloD(){
    arreglod = new string [Max];
    cont = 0;
    tam = Max;
}

ArregloD::~ArregloD(){
    delete [] arreglod;
}

void ArregloD::insertar_final(string v){
    if (cont == tam)
   
    {
        expandir ();
    }
    arreglod [cont] = v;
    cont++;
}
void ArregloD::inertar_inicio (string v){
    if (cont ==tam)
    {
        expandir();
    }
    for (size_t i = cont; i < 8; i--)
    {
        arreglod[i] = arreglod[i-1];
    }
    arreglod [0] = v;
    cont++;
    
    
}