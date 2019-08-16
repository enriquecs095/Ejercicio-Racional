#include "Racional.h"
#include <iostream>

using namespace std;

Racional::Racional(int _numerador, int _denominador){
numerador=_numerador;
denominador=_denominador;
}

Racional::Racional(){}


Racional operator+(const Racional & OperatorLeft, const Racional & OperatorRight){
 Racional resultado;
 int numeroMenor;
 if(OperatorLeft.denominador==0 || OperatorRight.denominador==0){
   resultado.numerador=0;
   resultado.denominador=0;
   return resultado;
 }else if(OperatorLeft.denominador==OperatorRight.denominador && OperatorLeft.numerador !=OperatorRight.denominador)
 {
     resultado.numerador=OperatorLeft.numerador+OperatorRight.numerador;
     resultado.denominador=OperatorLeft.denominador;
 }else if(OperatorLeft.numerador==OperatorLeft.denominador && OperatorRight.numerador==OperatorRight.denominador){
    resultado.numerador=2;
    resultado.denominador=1;
 }
     return resultado;
}
 
Racional operator-(const Racional & OperatorLeft, const Racional & OperatorRight){
 Racional resultado;
 int numeroMenor;
 if(OperatorLeft.denominador==0 || OperatorRight.denominador==0){
   resultado.numerador=0;
   resultado.denominador=0;
   return resultado;
 }else if(OperatorLeft.denominador==OperatorRight.denominador && OperatorLeft.numerador !=OperatorRight.denominador)
 {
     resultado.numerador=OperatorLeft.numerador-OperatorRight.numerador;
     resultado.denominador=OperatorLeft.denominador;
 }else if(OperatorLeft.numerador==OperatorLeft.denominador && OperatorRight.numerador==OperatorRight.denominador){
    resultado.numerador=2;
    resultado.denominador=1;
 }
     return resultado;
}

Racional operator*(const Racional & OperatorLeft, const Racional & OperatorRight){
 Racional resultado;
 int numeroMenor;
 if(OperatorLeft.denominador==0 || OperatorRight.denominador==0){
   resultado.numerador=0;
   resultado.denominador=0;
   return resultado;
 }else{ 
   resultado.numerador=OperatorLeft.numerador*OperatorRight.numerador;
   resultado.denominador=OperatorLeft.denominador*OperatorRight.denominador;
 }
     return resultado;
}

Racional operator/(const Racional & OperatorLeft, const Racional & OperatorRight){
 Racional resultado;
 int numeroMenor;
 if(OperatorLeft.denominador==0 || OperatorRight.denominador==0){
   resultado.numerador=0;
   resultado.denominador=0;
   return resultado;
 }else{ 
   resultado.numerador=OperatorLeft.numerador*OperatorRight.denominador;
   resultado.denominador=OperatorLeft.denominador*OperatorRight.numerador;
 }
     return resultado;
}

void Racional::Reducir(){
     int s=0;
     int a=2;
   
 while ( a<=numerador && a<=denominador )
       {
       if(numerador%a==0 && denominador%a==0)
         {
          numerador=numerador/a;
          denominador=denominador/a;
         }
       else               
          a++;
      }
}


void Racional::Imprimir(){
    if(denominador==1)
    cout<<"El resultado es :"<<numerador;
    else
   cout<<"El resultado es :"<<numerador<<" / "<<denominador<<endl;;
   
}

void Racional::ImprimirFlotante(){
float resultado;
resultado=float(numerador)/float(denominador);
cout<<" El resultado en decimales es :"<<resultado<<endl;
}



