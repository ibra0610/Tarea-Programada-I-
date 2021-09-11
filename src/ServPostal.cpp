#include "servPostal.h" 
 

ServicioPostal::ServicioPostal(float _peso, int _clase, float _distancia){
    this->peso = _peso; 
    this->clase = _clase; 
    this->distancia = _distancia; 
} 

float ServicioPostal::CalculoCosto(){
    float costo_total =0;

    switch(this->clase){
        case 1: 
            if(this->peso<=3){
                costo_total = 0.195 * this->distancia; 
            }else if(this->peso>=4 && this->peso<=8){
                costo_total = 0.450 * this->distancia; 
            }else{
                costo_total = 0.500 * this->distancia; 
            } 
        break; 
        case 2: 
            if(this->peso<=3){
                costo_total = 0.0195 * this->distancia; 
            }else if(this->peso>=4 && this->peso<=8){
                costo_total = 0.0450 * this->distancia; 
            }else{
                costo_total = 0.0500 * this->distancia; 
            }
        break; 
        case 3: 
            if(this->peso<=3){
                costo_total = 0.0150 * this->distancia; 
            }else if(this->peso>=4 && this->peso<=8){
                costo_total = 0.0160 * this->distancia; 
            }else{
                costo_total = 0.0170 * this->distancia; 
            }
        break; 
        default: 
             
        break; 
    }
    return costo_total;  
}