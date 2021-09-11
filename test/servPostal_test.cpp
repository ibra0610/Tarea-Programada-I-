#include <gtest/gtest.h> 

#include "../src/servPostal.h" 

namespace{

    TEST(ServicioPostalTest_Clase1_Peso1, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {2,1,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(3.9, resultado); 
    }

    TEST(ServicioPostalTest_Clase1_Peso2, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {5,1,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(9, resultado); 
    }

    TEST(ServicioPostalTest_Clase1_Peso3, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {10,1,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(10, resultado); 
    } 
    //CLASE 2 
    TEST(ServicioPostalTest_Clase2_Peso1, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {2,2,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(0.39, resultado); 
    }

    TEST(ServicioPostalTest_Clase2_Peso2, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {5,2,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(0.9, resultado); 
    }

    TEST(ServicioPostalTest_Clase2_Peso3, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {10,2,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(1, resultado); 
    } 

    //CLASE 3 

    TEST(ServicioPostalTest_Clase3_Peso1, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {2,3,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(0.3, resultado); 
    }

    TEST(ServicioPostalTest_Clase3_Peso2, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {5,3,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(0.32, resultado); 
    }

    TEST(ServicioPostalTest_Clase3_Peso3, ServicioPostal_CalculoCosto_Test){
        ServicioPostal servicio_postal {10,3,20}; 
        float resultado = servicio_postal.CalculoCosto(); 

        EXPECT_FLOAT_EQ(0.34, resultado); 
    }

}