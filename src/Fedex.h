#ifndef FEDEX_H 
#define FEDEX_H 

#include "envio.h" 
#include <string> 

class FedEx : public Envio {
    float peso; 
    int distancia; 

    public: 
        FedEx(float, int); 
        virtual float CalculoCosto(); 

}; 

#endif 