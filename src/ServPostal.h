#ifndef  SERVPOSTAL_H
#define  SERVPOSTAL_H

#include "envio.h" 

class ServicioPostal : public Envio {
    
    float peso; 
    int clase; 
    float distancia; 

    public: 
        ServicioPostal(float, int, float); 
        virtual float CalculoCosto(); 


}; 

#endif