#include "fedex.h"

FedEx::FedEx(float _peso, float _distancia){
    this->peso = _peso; 
    this->distancia = _distancia; 

} 

float FedEx::CalculoCosto(){
    float costo_total =20; 

    if(this->distancia>500){
        costo_total= costo_total + 5.00; 
    }
    if(this->peso>4){
        costo_total = costo_total + 3.00; 
    }
  
    return costo_total; 
}