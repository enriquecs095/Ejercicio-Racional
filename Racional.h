#ifndef RACIONAL_H
#define RACIONAL_H

class Racional{

public: 
//Racional():numerador(1), denominador(1){}//este es el default constructor
Racional(void);
Racional(int, int);
void Imprimir();
void ImprimirFlotante();
int numeroMenor(int, int);
friend Racional operator+(const Racional &, const Racional & );
friend Racional operator-(const Racional &, const Racional & );
friend Racional operator*(const Racional &, const Racional & );
friend Racional operator/(const Racional &, const Racional & );
void Reducir();

private:
int numerador;
int denominador;

};
#endif