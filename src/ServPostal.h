#ifndef  SERVPOSTAL_H
#define  SERVPOSTAL_H

#include "envio.h" 
#include <string> 

class ServicioPostal : public Envio {
    
    float peso; 
    std::string clase; 
    int distancia; 

    public: 
        ServicioPostal(float, string, int); 
        virtual float CalculoCosto(); 


}; 

#endif