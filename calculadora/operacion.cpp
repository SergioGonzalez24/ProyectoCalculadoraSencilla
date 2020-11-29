//
//  operaciones.cpp
//  calculadora
//
//  Created by Sergio Gonzalez on 28/11/20.
//

#include "operacion.h"
#include <iostream>

//Metodos Constructores
Operacion::Operacion() {
    
    num1=0;
    num2=0;
}

Operacion::Operacion(float num1,float num2) {
    
    this->num1=num1;
    this->num2=num2;
}

//Metodos Set
void Operacion::setNum1(float num1) {
    
    this->num1=num1;
}

void Operacion::setNum2(float num2) {
    
    this->num2=num2;
}

//Otros Metodos
float Operacion::suma() {
    
    float resSum = num1+num2;
    return resSum;
    
}

float Operacion::resta() {
    
    float resResta = num1-num2;
    return resResta;
}

float Operacion::mult() {
    
    float resMult= num1*num2;
    return resMult;
}

float Operacion::div() {
    
    float resDiv = num1/num2;
    return resDiv;
}





