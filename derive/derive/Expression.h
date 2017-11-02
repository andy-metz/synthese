#pragma once

#include <iostream>
#include <string>
#include "Visiteur.h"

using namespace std;

class Visiteur;

/**

Repr�sente une fonction math�matique r�elle � une variable r�elle, autrement dit une fonction f de la forme :

x |---> f(x)		o� x et f(x) sont des nombres r�els

Evidemment en machine, f est repr�sent�e par un arbre

*/
class Expression
{
public:
/**
Efface l'arbre repr�sentant f
*/
virtual ~Expression(void);

/**
Retourne une copie de l'arbre repr�sentant f
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