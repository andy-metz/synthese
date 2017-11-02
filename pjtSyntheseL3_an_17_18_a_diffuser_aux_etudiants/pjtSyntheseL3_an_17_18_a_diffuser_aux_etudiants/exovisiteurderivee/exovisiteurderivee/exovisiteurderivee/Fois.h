#pragma once
#include "opbinaire.h"

/**
Représente une fonction mathématique de la forme x |---> h(x) = f(x) * g(x)	

où  x |---> f(x) et x |--->g(x) sont deux fonctions mathématiques

En mémoire, h est représenté par un arbre binaire où :

le fils gauche est la fonction x |--->f(x)
le fils  droit est la fonction x |--->g(x)

*/
class Fois : public OpBinaire
{
public:
Fois( Expression * operandeGauche,  Expression * operandeDroit);
Fois( const Fois & plus);


/**
Retourne une copie de l'arbre représentant f
*/
virtual Expression * clone () const;

/**
retourne le symbole de l'opérateur : '*'
*/
virtual char symbole() const;	

/**
représente le calcul à effectuer :
retourne x * y
*/
virtual double effectuer(const double & x, const double & y) const;
};

