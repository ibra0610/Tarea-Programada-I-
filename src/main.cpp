#ifndef UNIT_TEST 

#include <iostream>
#include <vector> 

#include "envio.h"
#include "servPostal.h" 
#include "fedex.h" 

using namespace std; 

int main(){
    
    ServicioPostal *envio_ServicioPostal1 = new ServicioPostal(4, 2, 300);
    FedEx *envio_FedEx1 = new FedEx(5, 200); 

    std::vector<Envio *> conjuntoEnvios; 
        conjuntoEnvios.push_back(envio_ServicioPostal1);
        conjuntoEnvios.push_back(envio_FedEx1); 

    double totalMontoEnvios = 0; 

    for(Envio* envio: conjuntoEnvios){
        totalMontoEnvios += envio->CalculoCosto(); 
    }   

    std::cout<<"El monto total de los envios es de "<< totalMontoEnvios<< std::endl; 

    return 0; 
}

#endif 