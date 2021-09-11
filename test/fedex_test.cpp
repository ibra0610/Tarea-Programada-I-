#include <gtest/gtest.h> 

#include "../src/fedex.h" 

namespace{
    
    TEST(FedExTest_DistanciaExcede_PesoNormal, FedExTests_CalculoCosto_Test){
        FedEx fedex {3, 600}; 
        float resultado = fedex.CalculoCosto(); 

        EXPECT_EQ(25, resultado); 
    } 
    
    TEST(FedExTest_Distancia_Y_Peso_Normales, FedExTests_CalculoCosto_Test){
        FedEx fedex {2, 300}; 
        float resultado = fedex.CalculoCosto(); 

        EXPECT_EQ(20, resultado); 
    } 
    
    TEST(FedExTest_DistanciaNormal_Y_PesoExcede, FedExTests_CalculoCosto_Test){
        FedEx fedex {9, 100}; 
        float resultado = fedex.CalculoCosto(); 

        EXPECT_EQ(23, resultado); 
    } 

    TEST(FedExTest_Distancia_Y_Peso_Exceden, FedExTests_CalculoCosto_Test){
        FedEx fedex {8, 700}; 
        float resultado = fedex.CalculoCosto(); 

        EXPECT_EQ(28, resultado); 
    } 



}