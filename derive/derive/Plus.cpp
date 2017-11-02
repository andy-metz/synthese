#include "Plus.h"

Plus::Plus( Expression * operandeGauche,  Expression * operandeDroit):OpBinaire(operandeGauche,operandeDroit){}
Plus::Plus( const Plus & plus):OpBinaire(plus){}

/**
Retourne une copie de l'arbre représentant f
*/
/*virtual*/ Expression * Plus::clone () const
{
return new Plus(*this);
}

/**
retourne le symbole de l'opérateur : '+'
*/
/*virtual*/ char Plus::symbole() const
{
return '+';
}

/**
représente le calcul à effectuer :
retourne x + y
*/
/*virtual*/ double Plus::effectuer(const double & x, const double & y) const
{
return x + y;
}

const string Plus::accepte(const Visiteur * visiteur) const
{
	return visiteur->visite(this);
}