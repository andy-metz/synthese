#pragma once
#include "expression.h"

/**
Représente la fonction mathématique : x |---> x

*/
class Variable : public Expression
{
public:

/**
Retourne une copie de l'arbre représentant f
*/
virtual Expression * clone () const;

virtual operator string() const;

/**
Calcule la valeur de f(x)
*/
virtual double evaluer(const double & x) const;

const string accepte(const Visiteur * visiteur) const;
};

