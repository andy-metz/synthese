#pragma once

#include <iostream>
#include <string>
#include "Visiteur.h"

using namespace std;

class Visiteur;

/**

Représente une fonction mathématique réelle à une variable réelle, autrement dit une fonction f de la forme :

x |---> f(x)		où x et f(x) sont des nombres réels

Evidemment en machine, f est représentée par un arbre

*/
class Expression
{
public:
/**
Efface l'arbre représentant f
*/
virtual ~Expression(void);

/**
Retourne une copie de l'arbre représentant f
*/
virtual Expression * clone () const = 0;

virtual operator string() const = 0;

/**
Calcule la valeur de f(x)
*/
virtual double evaluer(const double & x) const = 0;

virtual const Expression accepte(const Visiteur * visiteur) const = 0;
};

ostream & operator << ( ostream & os, const Expression * expression);