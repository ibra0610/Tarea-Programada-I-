#ifndef FEDEX_H 
#define FEDEX_H 

#include "envio.h"  

class FedEx : public Envio {
    
    float peso;
    float distancia;  
    

    public: 
        FedEx(float, float); 
        virtual float CalculoCosto(); 

}; 

#endif 