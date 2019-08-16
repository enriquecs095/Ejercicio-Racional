#include <iostream>
#include "Racional.h"

using namespace std;

int main(){
Racional numero1(3,2);
Racional numero2(2,2);
Racional resultado;
cout<<"La suma de objetos es: "<<endl;
resultado=numero1+numero2;
resultado.Reducir();
resultado.Imprimir();
resultado.ImprimirFlotante();
cout<<"La resta de objetos es: "<<endl;
resultado=numero1-numero2;
resultado.Reducir();
resultado.Imprimir();
resultado.ImprimirFlotante();
cout<<"La multiplicacion de objetos es: "<<endl;
resultado=numero1*numero2;
resultado.Reducir();
resultado.Imprimir();
resultado.ImprimirFlotante();
cout<<"La division de objetos es: "<<endl;
resultado=numero1/numero2;
resultado.Reducir();
resultado.Imprimir();
resultado.ImprimirFlotante();
}