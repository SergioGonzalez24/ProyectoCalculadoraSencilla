//
//  main.cpp
//  calculadora
//
//  Created by Sergio Gonzalez on 28/11/20.
//

#include <iostream>
#include <string>
#include "operacion.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    
    
    float n1,n2;
    Operacion numeros;

    bool menu=true;
    bool preg=true;
    
    do {
        
        cout << "Programa que le ayudara a hacer operaciones basicas" << endl;
        cout << "Elija la operacion que desea realizar: " << endl;
        cout << "1-.Suma \n" << "2-.Resta \n" << "3-.Multiplicacion \n" << "4-.Division \n" << "5-.Salir del programa \n"<< endl;
        
        int choose;
        cin >> choose;
        
        system("Clear");
        
        if (choose==1) {
            
            bool ciclo=true;
            
            while (ciclo==true) {
                
                cout << "Elijio la operacion suma \n" << endl;
                
                cout << "Elija su primer numero: ";
                cin >> n1;
                cout << endl;
                numeros.setNum1(n1);
                
                cout << "Elija su segundo numero: ";
                cin >> n2;
                cout << endl;
                numeros.setNum2(n2);
                
                
                cout << "La operacion realizada es: " << numeros.getNum1() << " + " << numeros.getNum2() << " obteniendo como resultado = " << numeros.suma() <<"\n" << endl;
                

                
                do {
                    
                    cout << "¿Desea realizar otra suma? y/n ";
                    string pregunta;
                    cin >> pregunta;
                    
                    if (pregunta=="y") {
                        system("clear");
                        preg=false;
                    }
                    
                    else if (pregunta=="n") {
                        system("clear");
                        ciclo=false;
                        preg=false;
                    }
                    
                    else {
                        cout << "respuesta no valida try again" << endl;
                        system("clear");
                    }
                    
                } while (preg==true);
            }
            

            
            do {
                
                cout << "¿desea regresar a menu? y/n ";
                string resMenu;
                cin >> resMenu;
                
                if (resMenu=="y") { preg=false; }
                else if (resMenu=="n") {
                    preg=false;
                    menu=false;
                }
                
                else{cout << "Valor no valido try again" << endl; preg=true;}
                
            } while (preg==true);
        } //Fin Suma
        
        if (choose==2) {
            
            bool ciclo=true;
            
            while (ciclo==true) {
                
                cout << "Elijio la operacion resta \n" << endl;
                
                cout << "Elija su primer numero: ";
                cin >> n1;
                cout << endl;
                numeros.setNum1(n1);
                
                cout << "Elija su segundo numero: ";
                cin >> n2;
                cout << endl;
                numeros.setNum2(n2);
                
                
                cout << "La operacion realizada es: " << numeros.getNum1() << " - " << numeros.getNum2() << " obteniendo como resultado = " << numeros.resta() <<"\n" << endl;
                

                
                do {
                    
                    cout << "¿Desea realizar otra resta? y/n ";
                    string pregunta;
                    cin >> pregunta;
                    
                    if (pregunta=="y") {
                        system("clear");
                        preg=false;
                    }
                    
                    else if (pregunta=="n") {
                        system("clear");
                        ciclo=false;
                        preg=false;
                    }
                    
                    else {
                        cout << "respuesta no valida try again" << endl;
                        system("clear");
                    }
                    
                } while (preg==true);
            }
            

            
            do {
                
                cout << "¿desea regresar a menu? y/n ";
                string resMenu;
                cin >> resMenu;
                
                if (resMenu=="y") { preg=false; }
                else if (resMenu=="n") {
                    preg=false;
                    menu=false;
                }
                
                else{cout << "Valor no valido try again" << endl; preg=true;}
                
            } while (preg==true);
        } //Fin resta
        
        if (choose==3) {
            
            bool ciclo=true;
            
            while (ciclo==true) {
                
                cout << "Elijio la operacion multiplicacion \n" << endl;
                
                cout << "Elija su primer numero: ";
                cin >> n1;
                cout << endl;
                numeros.setNum1(n1);
                
                cout << "Elija su segundo numero: ";
                cin >> n2;
                cout << endl;
                numeros.setNum2(n2);
                
                
                cout << "La operacion realizada es: " << numeros.getNum1() << " * " << numeros.getNum2() << " obteniendo como resultado = " << numeros.mult() <<"\n" << endl;
                
                do {
                    
                    cout << "¿Desea realizar otra multiplicacion? y/n ";
                    string pregunta;
                    cin >> pregunta;
                    
                    if (pregunta=="y") {
                        system("clear");
                        preg=false;
                    }
                    
                    else if (pregunta=="n") {
                        system("clear");
                        ciclo=false;
                        preg=false;
                    }
                    
                    else {
                        cout << "respuesta no valida try again" << endl;
                        system("clear");
                    }
                    
                } while (preg==true);
            }
                        
            do {
                
                cout << "¿desea regresar a menu? y/n ";
                string resMenu;
                cin >> resMenu;
                
                if (resMenu=="y") { preg=false; }
                else if (resMenu=="n") {
                    preg=false;
                    menu=false;
                }
                
                else{cout << "Valor no valido try again" << endl; preg=true;}
                
            } while (preg==true);
        } //Fin Multiplicacion
        
        if (choose==4) {
            
            bool ciclo=true;
            
            while (ciclo==true) {
                
                cout << "Elijio la operacion division \n" << endl;
                
                cout << "Elija su primer numero: ";
                cin >> n1;
                cout << endl;
                numeros.setNum1(n1);
                
                cout << "Elija su segundo numero: ";
                cin >> n2;
                cout << endl;
                numeros.setNum2(n2);
                
                
                cout << "La operacion realizada es: " << numeros.getNum1() << " ÷ " << numeros.getNum2() << " obteniendo como resultado = " << numeros.div() <<"\n" << endl;

                do {
                    
                    cout << "¿Desea realizar otra division? y/n ";
                    string pregunta;
                    cin >> pregunta;
                    
                    if (pregunta=="y") {
                        system("clear");
                        preg=false;
                    }
                    
                    else if (pregunta=="n") {
                        system("clear");
                        ciclo=false;
                        preg=false;
                    }
                    
                    else {
                        cout << "respuesta no valida try again" << endl;
                        system("clear");
                    }
                    
                } while (preg==true);
            }

            do {
                
                cout << "¿desea regresar a menu? y/n ";
                string resMenu;
                cin >> resMenu;
                
                if (resMenu=="y") { preg=false; }
                else if (resMenu=="n") {
                    preg=false;
                    menu=false;
                }
                
                else{cout << "Valor no valido try again" << endl; preg=true;}
                
            } while (preg==true);
        } //Fin Division
        
        if (choose==5) {

            do {
                
                cout << "¿seguro que desea salir del programa? y/n ";
                string resMenu;
                cin >> resMenu;
                
                if (resMenu=="y") { preg=false; menu=false;}
                else if (resMenu=="n") {preg=false;}
                else{cout << "Valor no valido try again" << endl; preg=true;}
                
            } while (preg==true);
        } //Fin Salir
        
//        Menu Principal
    } while (menu==true);
    
    system("Clear");
    return 0;
    }

