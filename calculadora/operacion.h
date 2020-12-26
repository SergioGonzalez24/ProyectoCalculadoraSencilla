//
//  operaciones.hpp
//  calculadora
//
//  Created by Sergio Gonzalez on 28/11/20.
//

#ifndef operacion_h
#define operacion_h

#include <stdio.h>

class Operacion {
  
private:
    
    float num1;
    float num2;
    
public:
    
//    Metodos Constructores
    Operacion();
    Operacion(float num1,float num2);
    
//    Metodos Set
    void setNum1(float num1);
    void setNum2(float num2);
    
//    Metodos Get
    float getNum1() {return num1;}
    float getNum2() {return num2;}
    
//    Otros metodos
    float suma();
    float resta();
    float mult();
    float div();
    float raiz();
    float power();
    
    
    
};

#endif /* operaciones_hpp */
